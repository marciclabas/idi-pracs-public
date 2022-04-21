#include "MyForm.h"

MyForm::MyForm(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);
	QObject::connect(
		ui.lineEdit, &QLineEdit::textEdited,
		[=](const QString & s) {
			ui.label->setText(s.toUpper());
		});
}
