/***************************************************************************
 *   Copyright (C) 2024 by Stefan Kebekus                                  *
 *   stefan.kebekus@gmail.com                                              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <QXmlStreamReader>

#include "FPL.h"

#include "DataFileAbstract.h"
#include "Waypoint.h"


FileFormats::FPL::FPL(const QString& fileName)
{
    QList<GeoMaps::Waypoint> wplist;

    auto file = FileFormats::DataFileAbstract::openFileURL(fileName);
    auto success = file->open(QIODevice::ReadOnly);
    if (!success)
    {
        setError(QObject::tr("Cannot open FPL file %1 for reading.", "FileFormats::FPL").arg(fileName));
        return;
    }

    QXmlStreamReader xmlReader(file.data());
    if (!xmlReader.readNextStartElement())
    {
        setError(QObject::tr("Cannot parse FPL file %1 for XML.", "FileFormats::FPL").arg(fileName));
        return;
    }
    if (xmlReader.name().compare("flight-plan") != 0)
    {
        setError(QObject::tr("File %1 does not contain a flight plan", "FileFormats::FPL").arg(fileName));
        return;
    }

    int count1 = 0;
    int count2 = 0;
    while(xmlReader.readNextStartElement())
    {
        if(xmlReader.name().compare("waypoint-table", Qt::CaseInsensitive) == 0)
        {
            count1++;
            int count3 = 0;
            while(xmlReader.readNextStartElement())
            {
                if(xmlReader.name().compare("waypoint", Qt::CaseInsensitive) != 0)
                {
                    xmlReader.skipCurrentElement();
                }
                else
                {
                    count3++;
                    GeoMaps::Waypoint wpoint({}, {});
                    wpoint.m_name = nullptr;
                    wpoint.m_coordinate.setAltitude(NULL);
                    wpoint.m_coordinate.setLatitude(NULL);
                    wpoint.m_coordinate.setLongitude(NULL);
                    while(xmlReader.readNextStartElement())
                    {
                        if(xmlReader.name().compare("identifier", Qt::CaseInsensitive) == 0)
                        {
                            if (!wpoint.m_name.isNull())
                            {
                                setError(QObject::tr("Waypoint %1 has more than one identifier", "FileFormats::FPL").arg(count3));
                                return;
                            }
                            wpoint.m_name = xmlReader.readElementText();
                        }
                        else if(xmlReader.name().compare("lat", Qt::CaseInsensitive) == 0)
                        {
                            if (wpoint.m_coordinate.latitude() != NULL)
                            {
                                setError(QObject::tr("Waypoint %1 has more than one latitude", "FileFormats::FPL").arg(count3));
                                return;
                            }
                            bool ok = false;
                            wpoint.m_coordinate.setLatitude(xmlReader.readElementText().toDouble(&ok));
                            if (!ok)
                            {
                                setError(QObject::tr("Waypoint %1 does not have a valid latitude", "FileFormats::FPL").arg(count3));
                                return;
                            };
                        }
                        else if(xmlReader.name().compare("lon", Qt::CaseInsensitive) == 0)
                        {
                            if (wpoint.m_coordinate.longitude() != NULL)
                            {
                                setError(QObject::tr("Waypoint %1 has more than one longitude", "FileFormats::FPL").arg(count3));
                                return;
                            }
                            bool ok = false;
                            wpoint.m_coordinate.setLongitude(xmlReader.readElementText().toDouble(&ok));
                            if (!ok)
                            {
                                setError(QObject::tr("Waypoint %1 does not have a valid longitude", "FileFormats::FPL").arg(count3));
                                return;
                            };
                        }
                        else if(xmlReader.name().compare("elevation", Qt::CaseInsensitive) == 0)
                        {
                            if (wpoint.m_coordinate.altitude() != NULL)
                            {
                                setError(QObject::tr("Waypoint %1 has more than one elevation", "FileFormats::FPL").arg(count3));
                                return;
                            }
                            bool ok = false;
                            wpoint.m_coordinate.setAltitude(xmlReader.readElementText().toDouble(&ok));
                            if (!ok)
                            {
                                setError(QObject::tr("Waypoint %1 does not have a valid elevation", "FileFormats::FPL").arg(count3));
                                return;
                            };
                        }
                        else
                        {
                            xmlReader.skipCurrentElement();
                        }
                    }
                    if (wpoint.m_name.isNull())
                    {
                        setError(QObject::tr("Waypoint %1 does not have an identifier", "FileFormats::FPL").arg(count3));
                        return;
                    }
                    if (!wpoint.m_coordinate.isValid())
                    {
                        setError(QObject::tr("Waypoint %1 does not have valid coordinats", "FileFormats::FPL").arg(count3));
                        return;
                    }
                    wplist.append(wpoint);
                }
            }
            if (count3 == 0)
            {
                setError(QObject::tr("File %1 does not contain a waypoint", "FileFormats::FPL").arg(fileName));
                return;
            }
        }
        else if (xmlReader.name().compare("route", Qt::CaseInsensitive) == 0)
        {
            count2++;
            int count3 = 0;
            while(xmlReader.readNextStartElement())
            {
                if(xmlReader.name().compare("route-point", Qt::CaseInsensitive) != 0)
                {
                    xmlReader.skipCurrentElement();
                }
                else
                {
                    count3++;
                    int count4 = 0;
                    QString id;
                    while(xmlReader.readNextStartElement())
                    {
                        if(xmlReader.name().compare("waypoint-identifier", Qt::CaseInsensitive) != 0)
                        {
                            xmlReader.skipCurrentElement();
                        }
                        else
                        {
                            count4++;
                            id = xmlReader.readElementText();
                        }
                    }
                    if (count4 != 1)
                    {
                        setError(QObject::tr("Route point %1 does not have a unique waypoint identifier", "FileFormats::FPL").arg(count3));
                        return;
                    }
                    bool ok = false;
                    for (long i = 0; i < wplist.size(); i++)
                    {
                        if (wplist.at(i).m_name.compare(id) == 0)
                        {
                            m_waypoints.append(GeoMaps::Waypoint(wplist.at(i).m_coordinate, wplist.at(i).m_name));
                            ok = true;
                            i = wplist.size();
                        }
                    }
                    if (!ok)
                    {
                        setError(QObject::tr("Waypoint identifier for route point %1 does not exist", "FileFormats::FPL").arg(count3));
                        return;
                    }
                }
            }
            if (count3 == 0)
            {
                setError(QObject::tr("File %1 does not contain a waypoint", "FileFormats::FPL").arg(fileName));
                return;
            }
        }
        else
        {
            xmlReader.skipCurrentElement();
        }
    }
    if (count1 != 1)
    {
        setError(QObject::tr("File %1 does not contain a waypoint", "FileFormats::FPL").arg(fileName));
        return;
    }
    if (count2 != 1)
    {
        setError(QObject::tr("File %1 does not contain a route", "FileFormats::FPL").arg(fileName));
        return;
    }
}


