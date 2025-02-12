/********************************************************************************
** Form generated from reading UI file 'bytecoremain.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYTECOREMAIN_H
#define UI_BYTECOREMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ByteCoreMain
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *executeButton;
    QTextBrowser *consoleOutput;

    void setupUi(QWidget *ByteCoreMain)
    {
        if (ByteCoreMain->objectName().isEmpty())
            ByteCoreMain->setObjectName("ByteCoreMain");
        ByteCoreMain->resize(866, 432);
        ByteCoreMain->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #1c1c1c; /* Dark background */\n"
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
        plainTextEdit = new QPlainTextEdit(ByteCoreMain);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(20, 20, 671, 281));
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(12);
        plainTextEdit->setFont(font);
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"	background: white;\n"
"	border: 1px solid rgb(125, 125, 125);\n"
"    color: black;\n"
"}"));
        plainTextEdit->setFrameShape(QFrame::Shape::StyledPanel);
        plainTextEdit->setFrameShadow(QFrame::Shadow::Plain);
        plainTextEdit->setReadOnly(false);
        executeButton = new QPushButton(ByteCoreMain);
        executeButton->setObjectName("executeButton");
        executeButton->setGeometry(QRect(20, 320, 141, 31));
        executeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 6px;\n"
"}"));
        consoleOutput = new QTextBrowser(ByteCoreMain);
        consoleOutput->setObjectName("consoleOutput");
        consoleOutput->setGeometry(QRect(180, 320, 511, 111));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        consoleOutput->setPalette(palette);
        consoleOutput->setFont(font);
        consoleOutput->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"	border: 1px solid rgb(125, 125, 125);\n"
"	background: white;\n"
"	color: black;\n"
"}"));

        retranslateUi(ByteCoreMain);

        QMetaObject::connectSlotsByName(ByteCoreMain);
    } // setupUi

    void retranslateUi(QWidget *ByteCoreMain)
    {
        ByteCoreMain->setWindowTitle(QCoreApplication::translate("ByteCoreMain", "ByteCore", nullptr));
        plainTextEdit->setPlaceholderText(QString());
        executeButton->setText(QCoreApplication::translate("ByteCoreMain", "Execute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ByteCoreMain: public Ui_ByteCoreMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYTECOREMAIN_H
