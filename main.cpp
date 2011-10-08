#include <QtGui/QApplication>
#include "WWPP_Calculator.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    WWPP_Calculator foo;
    foo.show();
    return app.exec();
}
