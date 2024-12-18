
#include <QCommandLineParser>

#include "PLN.h"
#include "FPL.h"

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

    if (parser.positionalArguments().at(0).endsWith("PLN", Qt::CaseInsensitive))
    {
        qWarning() << "Reading file as PLN" << parser.positionalArguments().at(0);
        FileFormats::PLN const PLN(parser.positionalArguments().at(0));
        qWarning() << "Errors while reading:" << PLN.error();
        qWarning() << "Warnings while reading:" << PLN.warnings();
    }
    else
    {
        qWarning() << "Reading file as FPL" << parser.positionalArguments().at(0);
        FileFormats::FPL const FPL(parser.positionalArguments().at(0));
        qWarning() << "Errors while reading:" << FPL.error();
        qWarning() << "Warnings while reading:" << FPL.warnings();
    }

    return 0;
}
