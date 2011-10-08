#ifndef WWPP_Calculator_H
#define WWPP_Calculator_H

#include <KXmlGuiWindow>
#include <KTextEdit>
 
class WWPP_Calculator : public KXmlGuiWindow
{
  public:
    WWPP_Calculator(QWidget *parent=0);
 
  private:
    KTextEdit* textArea;
};
 
#endif // WWPP_Calculator_H
