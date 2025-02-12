#include "bytecoremain.h"
#include "ui_bytecoremain.h"

#include <QtConcurrent/QtConcurrent>  // Qt threading
#include <thread> // For sleep_for
#include <chrono> // For std::chrono::seconds

ByteCoreMain::ByteCoreMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ByteCoreMain)
{
    ui->setupUi(this);

    // Run initialization in a separate thread using a lambda
    QtConcurrent::run([this]() { initialize(); });
}

ByteCoreMain::~ByteCoreMain()
{
    delete ui;
}

void ByteCoreMain::initialize() {
    QMetaObject::invokeMethod(this, "print_console", Qt::QueuedConnection,
                              Q_ARG(QString, "Initializing.."), Q_ARG(QString, "black"), Q_ARG(bool, false));
    std::this_thread::sleep_for(std::chrono::seconds(1));

    QMetaObject::invokeMethod(this, "print_console", Qt::QueuedConnection,
                              Q_ARG(QString, "Authenticating.. "), Q_ARG(QString, "black"), Q_ARG(bool, false));
    std::this_thread::sleep_for(std::chrono::seconds(1));

    QMetaObject::invokeMethod(this, "print_console", Qt::QueuedConnection,
                              Q_ARG(QString, "OK!"), Q_ARG(QString, "lime"), Q_ARG(bool, true));

    QMetaObject::invokeMethod(this, "print_console", Qt::QueuedConnection,
                              Q_ARG(QString, "Welcome, script_ing!"), Q_ARG(QString, "black"), Q_ARG(bool, false));
}


void ByteCoreMain::print_console(QString message, QString color, bool sameLine) {
    QString formattedMessage = QString("<font color='%1'>%2</font>").arg(color, message);

    if (sameLine) {
        ui->consoleOutput->moveCursor(QTextCursor::End);
        ui->consoleOutput->insertHtml(formattedMessage);  // Inserts at end of current line
    } else {
        ui->consoleOutput->append(formattedMessage);  // Normal append (new line)
    }
}

