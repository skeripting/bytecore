/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *programNameLabel;
    QPushButton *loginButton;
    QLineEdit *passwordTextBox;
    QLabel *credit;
    QLineEdit *usernameTextBox;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(403, 459);
        MainWindow->setMaximumSize(QSize(403, 459));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #1E1E1E; /* Dark background */\n"
"    color: #FFFFFF; /* White text */\n"
"}\n"
"QMenuBar {\n"
"    background-color: #252526;\n"
"    color: #FFFFFF;\n"
"}\n"
"QStatusBar {\n"
"    background-color: #252526;\n"
"}\n"
"QPushButton {\n"
"    background-color: #007ACC;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #005F9E;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(403, 457));
        programNameLabel = new QLabel(centralwidget);
        programNameLabel->setObjectName("programNameLabel");
        programNameLabel->setGeometry(QRect(130, 70, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Plus Jakarta Sans")});
        font.setPointSize(20);
        font.setBold(true);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferAntialias);
        font.setHintingPreference(QFont::PreferFullHinting);
        programNameLabel->setFont(font);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(130, 250, 131, 31));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 6px;\n"
"}"));
        passwordTextBox = new QLineEdit(centralwidget);
        passwordTextBox->setObjectName("passwordTextBox");
        passwordTextBox->setGeometry(QRect(90, 190, 211, 31));
        QFont font2;
        font2.setPointSize(10);
        passwordTextBox->setFont(font2);
        passwordTextBox->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding-left: 10px; /* Adds 10px padding inside the box */\n"
"}"));
        passwordTextBox->setEchoMode(QLineEdit::EchoMode::Password);
        credit = new QLabel(centralwidget);
        credit->setObjectName("credit");
        credit->setGeometry(QRect(90, 360, 211, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Plus Jakarta Sans")});
        font3.setPointSize(11);
        font3.setStyleStrategy(QFont::PreferAntialias);
        credit->setFont(font3);
        credit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernameTextBox = new QLineEdit(centralwidget);
        usernameTextBox->setObjectName("usernameTextBox");
        usernameTextBox->setGeometry(QRect(90, 140, 211, 31));
        usernameTextBox->setFont(font2);
        usernameTextBox->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding-left: 10px; /* Adds 10px padding inside the box */\n"
"}"));
        usernameTextBox->setEchoMode(QLineEdit::EchoMode::Normal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 403, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ByteCore", nullptr));
        programNameLabel->setText(QCoreApplication::translate("MainWindow", "ByteCore", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        passwordTextBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        credit->setText(QCoreApplication::translate("MainWindow", "Developer: Kushal Timsina", nullptr));
        usernameTextBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
