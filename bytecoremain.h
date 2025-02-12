#ifndef BYTECOREMAIN_H
#define BYTECOREMAIN_H

#include <QWidget>

namespace Ui {
class ByteCoreMain;
}

class ByteCoreMain : public QWidget
{
    Q_OBJECT  // Required for Qt's meta-object system

public:
    explicit ByteCoreMain(QWidget *parent = nullptr);
    ~ByteCoreMain();

public slots:
    void print_console(QString message, QString color, bool sameLine);

private:
    Ui::ByteCoreMain *ui;
    void initialize();
};

#endif // BYTECOREMAIN_H
