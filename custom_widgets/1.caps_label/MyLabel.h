#include <QLabel>

class MyLabel : public QLabel {
    Q_OBJECT
public:
    MyLabel(QWidget * parent);
    
public slots:
    void setTextUpper(QString s);
};
