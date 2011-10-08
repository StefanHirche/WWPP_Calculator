#include "WWPP_Calculator.h"

#include <KApplication>
#include <KAction>
#include <KLocale>
#include <KActionCollection>
#include <KStandardAction>

WWPP_Calculator::WWPP_Calculator(QWidget* parent): KXmlGuiWindow(parent)
{
    textArea = new KTextEdit();
    setCentralWidget(textArea);
    setupActions();
}

void WWPP_Calculator::setupActions()
{
    KAction* clearAction = new KAction(this);
    clearAction->setText(i18n("&Clear"));
    clearAction->setIcon(KIcon("document-new"));
    clearAction->setShortcut(Qt::CTRL + Qt::Key_W);
    actionCollection()->addAction("clear", clearAction);
    connect(clearAction, SIGNAL(triggered(bool)),
            textArea, SLOT(clear()));

    KStandardAction::quit(kapp, SLOT(quit()),
                          actionCollection());

    setupGUI(Default, "wwpp_calculatorui.rc");
}
