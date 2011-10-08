#include <KApplication>
#include <KAboutData>
#include <KCmdLineArgs>
#include <KLocale>

#include "WWPP_Calculator.h"


int main(int argc, char** argv)
{
    KAboutData aboutData( "WWPP_Calculator", 0,
                          ki18n("WWPP Calculator"), "0.1",
                          ki18n("A calculator for Weight Watchers Pro Points"),
                          KAboutData::License_GPL,
                          ki18n("Copyright (c) 2011 Stefan Hirche") );
    KCmdLineArgs::init( argc, argv, &aboutData );

    KApplication app;
    WWPP_Calculator *window = new WWPP_Calculator();
    window->show();
    return app.exec();
}
