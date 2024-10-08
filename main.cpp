
#include <QCommandLineParser>

#include "PLN.h"

auto main(int argc, char *argv[]) -> int
{
    QCoreApplication const app(argc, argv);

    QCommandLineParser parser;
    parser.setApplicationDescription(u"Test for file importing"_qs);
    parser.addHelpOption();
    parser.process(app);

    if (parser.positionalArguments().isEmpty())
    {
        qCritical() << "File name required.";
        return -1;

    }

    qWarning() << "Reading file as PLN" << parser.positionalArguments().at(0);
    FileFormats::PLN PLN(parser.positionalArguments().at(0));
    qWarning() << "Errors while reading:" << PLN.error();
    qWarning() << "Warnings while reading:" << PLN.warnings();
    qWarning() << "Waypoint list:" << PLN.waypoints();

    return 0;
}
