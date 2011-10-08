#include "WWPP_Calculator.h"

 
WWPP_Calculator::WWPP_Calculator(QWidget* parent): KXmlGuiWindow(parent)
{
textArea = new KTextEdit();
  setCentralWidget(textArea);
  setupGUI();
}
