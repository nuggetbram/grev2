/********************************************************************************
** Form generated from reading UI file 'savingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVINGSDIALOG_H
#define UI_SAVINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoSavingsDialog
{
public:
    QLineEdit *savingsPercentEdit;
    QLineEdit *savingsAddressEdit;
    QLabel *label_2;
    QLineEdit *savingsMinEdit;
    QLineEdit *savingsMaxEdit;
    QLabel *message;
    QPushButton *enableButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;

    void setupUi(QWidget *AutoSavingsDialog)
    {
        if (AutoSavingsDialog->objectName().isEmpty())
            AutoSavingsDialog->setObjectName(QStringLiteral("AutoSavingsDialog"));
        AutoSavingsDialog->setWindowModality(Qt::NonModal);
        AutoSavingsDialog->resize(652, 300);
        savingsPercentEdit = new QLineEdit(AutoSavingsDialog);
        savingsPercentEdit->setObjectName(QStringLiteral("savingsPercentEdit"));
        savingsPercentEdit->setGeometry(QRect(20, 150, 131, 20));
        savingsAddressEdit = new QLineEdit(AutoSavingsDialog);
        savingsAddressEdit->setObjectName(QStringLiteral("savingsAddressEdit"));
        savingsAddressEdit->setGeometry(QRect(20, 190, 571, 21));
        label_2 = new QLabel(AutoSavingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 591, 81));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        savingsMinEdit = new QLineEdit(AutoSavingsDialog);
        savingsMinEdit->setObjectName(QStringLiteral("savingsMinEdit"));
        savingsMinEdit->setGeometry(QRect(250, 150, 131, 20));
        savingsMaxEdit = new QLineEdit(AutoSavingsDialog);
        savingsMaxEdit->setObjectName(QStringLiteral("savingsMaxEdit"));
        savingsMaxEdit->setGeometry(QRect(490, 150, 131, 20));
        message = new QLabel(AutoSavingsDialog);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(330, 220, 291, 61));
        enableButton = new QPushButton(AutoSavingsDialog);
        enableButton->setObjectName(QStringLiteral("enableButton"));
        enableButton->setGeometry(QRect(20, 240, 75, 23));
        disableButton = new QPushButton(AutoSavingsDialog);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setGeometry(QRect(160, 240, 75, 23));
        addressBookButton = new QPushButton(AutoSavingsDialog);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setGeometry(QRect(590, 190, 28, 21));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);

        retranslateUi(AutoSavingsDialog);

        QMetaObject::connectSlotsByName(AutoSavingsDialog);
    } // setupUi

    void retranslateUi(QWidget *AutoSavingsDialog)
    {
        AutoSavingsDialog->setWindowTitle(QApplication::translate("AutoSavingsDialog", "Auto Savings", 0));
#ifndef QT_NO_TOOLTIP
        savingsPercentEdit->setToolTip(QApplication::translate("AutoSavingsDialog", "Enter whole numbers 1 - 50", 0));
#endif // QT_NO_TOOLTIP
        savingsPercentEdit->setPlaceholderText(QApplication::translate("AutoSavingsDialog", "Enter % to Give (1-50)", 0));
#ifndef QT_NO_TOOLTIP
        savingsAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        savingsAddressEdit->setPlaceholderText(QApplication::translate("AutoSavingsDialog", "Enter Address to Send to", 0));
        label_2->setText(QApplication::translate("AutoSavingsDialog", "Auto Savings allows you to automatically send up to 50% of your stake to another GreenCoinX address after it matures.\n"
"\n"
"Please enter percentage to give and GreenCoinX address to save to. Min and Max amount are optional.", 0));
#ifndef QT_NO_TOOLTIP
        savingsMinEdit->setToolTip(QApplication::translate("AutoSavingsDialog", "Enter whole numbers", 0));
#endif // QT_NO_TOOLTIP
        savingsMinEdit->setPlaceholderText(QApplication::translate("AutoSavingsDialog", "Enter Min Amount", 0));
#ifndef QT_NO_TOOLTIP
        savingsMaxEdit->setToolTip(QApplication::translate("AutoSavingsDialog", "Enter whole numbers", 0));
#endif // QT_NO_TOOLTIP
        savingsMaxEdit->setText(QString());
        savingsMaxEdit->setPlaceholderText(QApplication::translate("AutoSavingsDialog", "Enter Max Amount", 0));
        message->setText(QString());
#ifndef QT_NO_STATUSTIP
        enableButton->setStatusTip(QApplication::translate("AutoSavingsDialog", "Check and turn on Auto Savings", 0));
#endif // QT_NO_STATUSTIP
        enableButton->setText(QApplication::translate("AutoSavingsDialog", "Enable", 0));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("AutoSavingsDialog", "Turn off Auto Savings", 0));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("AutoSavingsDialog", "Disable", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("AutoSavingsDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("AutoSavingsDialog", "Alt+A", 0));
    } // retranslateUi

};

namespace Ui {
    class AutoSavingsDialog: public Ui_AutoSavingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVINGSDIALOG_H
