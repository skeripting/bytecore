#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "bytecoremain.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Plus Jakarta Sans", 20, QFont::Bold);
    font.setHintingPreference(QFont::PreferNoHinting);
    font.setStyleStrategy(QFont::PreferAntialias);
    ui->programNameLabel->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    std::string username = ui->usernameTextBox->text().toStdString();
    std::string password = ui->passwordTextBox->text().toStdString();

    if (username == "script_ing" && password == "admin") {
        // Login
        ByteCoreMain* byteCoreMainWindow = new ByteCoreMain();
        byteCoreMainWindow->show();
        this->close();
    }
    else {
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password. Please try again.");
    }
}

