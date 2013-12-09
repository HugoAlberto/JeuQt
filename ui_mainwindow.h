/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonClient;
    QPushButton *pushButtonServeur;
    QPushButton *pushButtonSolo;
    QPushButton *pushButtonSoloIa;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QGridLayout *gridLayoutJeu;
    QFrame *line_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelJoueur1;
    QLabel *labelJoueur2;
    QHBoxLayout *horizontalLayoutJoueurs;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBarTour;
    QPushButton *pushButtonNouvellePartie;
    QFrame *line_3;
    QPushButton *pushButton_Quitter;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QPushButton *pushButtonAnnulerLaRecherche;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(423, 532);
        QPalette palette;
        QBrush brush(QColor(2, 90, 198, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(48, 140, 198, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(145, 141, 126, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/vert.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/fond-texture.jpg);\n"
"background-position: 50% 50%;"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/I);"));

        verticalLayout_3->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonClient = new QPushButton(page);
        pushButtonClient->setObjectName(QString::fromUtf8("pushButtonClient"));
        pushButtonClient->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        pushButtonClient->setCheckable(false);
        pushButtonClient->setChecked(false);
        pushButtonClient->setDefault(true);
        pushButtonClient->setFlat(true);

        horizontalLayout->addWidget(pushButtonClient);

        pushButtonServeur = new QPushButton(page);
        pushButtonServeur->setObjectName(QString::fromUtf8("pushButtonServeur"));
        pushButtonServeur->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        pushButtonServeur->setAutoDefault(true);
        pushButtonServeur->setDefault(true);
        pushButtonServeur->setFlat(true);

        horizontalLayout->addWidget(pushButtonServeur);

        pushButtonSolo = new QPushButton(page);
        pushButtonSolo->setObjectName(QString::fromUtf8("pushButtonSolo"));
        pushButtonSolo->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        pushButtonSolo->setDefault(true);
        pushButtonSolo->setFlat(true);

        horizontalLayout->addWidget(pushButtonSolo);

        pushButtonSoloIa = new QPushButton(page);
        pushButtonSoloIa->setObjectName(QString::fromUtf8("pushButtonSoloIa"));
        pushButtonSoloIa->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        pushButtonSoloIa->setDefault(true);
        pushButtonSoloIa->setFlat(true);

        horizontalLayout->addWidget(pushButtonSoloIa);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/fond-plateau.png);\n"
"background-position: 50% 50%;\n"
"background-attachment:fixed;\n"
"background-repeat:no-repeat;"));
        gridLayoutJeu = new QGridLayout(widget);
        gridLayoutJeu->setSpacing(6);
        gridLayoutJeu->setContentsMargins(11, 11, 11, 11);
        gridLayoutJeu->setObjectName(QString::fromUtf8("gridLayoutJeu"));
        gridLayoutJeu->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayoutJeu->setContentsMargins(1, -1, -1, -1);

        verticalLayout_4->addWidget(widget);

        line_2 = new QFrame(page_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 100));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelJoueur1 = new QLabel(groupBox);
        labelJoueur1->setObjectName(QString::fromUtf8("labelJoueur1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelJoueur1->sizePolicy().hasHeightForWidth());
        labelJoueur1->setSizePolicy(sizePolicy);
        labelJoueur1->setMaximumSize(QSize(16777215, 20));
        labelJoueur1->setLayoutDirection(Qt::LeftToRight);
        labelJoueur1->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        labelJoueur1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelJoueur1);

        labelJoueur2 = new QLabel(groupBox);
        labelJoueur2->setObjectName(QString::fromUtf8("labelJoueur2"));
        sizePolicy.setHeightForWidth(labelJoueur2->sizePolicy().hasHeightForWidth());
        labelJoueur2->setSizePolicy(sizePolicy);
        labelJoueur2->setMaximumSize(QSize(16777215, 20));
        labelJoueur2->setAutoFillBackground(false);
        labelJoueur2->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";\n"
""));
        labelJoueur2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelJoueur2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayoutJoueurs = new QHBoxLayout();
        horizontalLayoutJoueurs->setSpacing(6);
        horizontalLayoutJoueurs->setObjectName(QString::fromUtf8("horizontalLayoutJoueurs"));

        verticalLayout->addLayout(horizontalLayoutJoueurs);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        progressBarTour = new QProgressBar(groupBox);
        progressBarTour->setObjectName(QString::fromUtf8("progressBarTour"));
        progressBarTour->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/metal-texture.jpg);\n"
"color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));
        progressBarTour->setMaximum(20);
        progressBarTour->setValue(0);
        progressBarTour->setOrientation(Qt::Horizontal);
        progressBarTour->setInvertedAppearance(false);
        progressBarTour->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_4->addWidget(progressBarTour);

        pushButtonNouvellePartie = new QPushButton(groupBox);
        pushButtonNouvellePartie->setObjectName(QString::fromUtf8("pushButtonNouvellePartie"));
        pushButtonNouvellePartie->setEnabled(false);
        pushButtonNouvellePartie->setMaximumSize(QSize(16777215, 16777215));
        pushButtonNouvellePartie->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));

        horizontalLayout_4->addWidget(pushButtonNouvellePartie);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMaximumSize(QSize(16777215, 25));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        pushButton_Quitter = new QPushButton(groupBox);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setMaximumSize(QSize(16777215, 16777215));
        pushButton_Quitter->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 75 12pt \"Cantarell\";"));

        horizontalLayout_4->addWidget(pushButton_Quitter);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addWidget(groupBox);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/fond-texture.jpg);\n"
"background-position: 50% 50%;"));
        verticalLayout_5 = new QVBoxLayout(page_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        pushButtonAnnulerLaRecherche = new QPushButton(page_3);
        pushButtonAnnulerLaRecherche->setObjectName(QString::fromUtf8("pushButtonAnnulerLaRecherche"));
        pushButtonAnnulerLaRecherche->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/mescouilles.png);"));

        verticalLayout_5->addWidget(pushButtonAnnulerLaRecherche);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Jeu Qt", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Select a game mode :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonClient->setText(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        pushButtonServeur->setText(QApplication::translate("MainWindow", "Server", 0, QApplication::UnicodeUTF8));
        pushButtonSolo->setText(QApplication::translate("MainWindow", "P vs P", 0, QApplication::UnicodeUTF8));
        pushButtonSoloIa->setText(QApplication::translate("MainWindow", "Solo vs AI", 0, QApplication::UnicodeUTF8));
        labelJoueur1->setText(QString());
        labelJoueur2->setText(QString());
        progressBarTour->setFormat(QApplication::translate("MainWindow", "%v", 0, QApplication::UnicodeUTF8));
        pushButtonNouvellePartie->setText(QApplication::translate("MainWindow", "New game", 0, QApplication::UnicodeUTF8));
        pushButton_Quitter->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Waiting for a client...</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonAnnulerLaRecherche->setText(QApplication::translate("MainWindow", "Stop searching", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
