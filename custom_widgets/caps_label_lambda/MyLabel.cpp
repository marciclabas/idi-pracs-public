#include "MyLabel.h"

MyLabel::MyLabel(QWidget * parent = nullptr) : QLabel(parent) {}

void MyLabel::setTextUpper(QString s) {
     QString capitalized = s.toUpper();
     this->setText(capitalized);
}
