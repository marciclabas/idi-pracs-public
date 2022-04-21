#include <QLineEdit>

class MyLineEdit : public QLineEdit {
	Q_OBJECT
public:
	MyLineEdit(QWidget * parent);

public slots:
	void returnExtended();

signals:
	void returnedText(const QString & s);
};
