#include "MyLineEdit.h"

MyLineEdit::MyLineEdit(QWidget * parent = nullptr) : QLineEdit(parent) {}

void MyLineEdit::returnExtended() {
	QString readText = this->text();
	emit returnedText(readText);
}
