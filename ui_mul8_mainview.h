/********************************************************************************
** Form generated from reading UI file 'mul8_mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUL8_MAINVIEW_H
#define UI_MUL8_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MUL8_MainView
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Main;
    QPushButton *playMotionButton;
    QListWidget *preExistingMotionList;
    QListWidget *currentMotionPlaybackList;
    QFrame *line;
    QPushButton *addMotionToListButton;
    QPushButton *removeMotionFromListButton;
    QCheckBox *checkBox;
    QPushButton *clearListButton;
    QWidget *Edit;
    QGroupBox *MotorControlBox;
    QLabel *m24Label;
    QLabel *m23Label;
    QLabel *m15Label;
    QLabel *m16Label;
    QLabel *m13Label;
    QLabel *m14Label;
    QLabel *m17Label;
    QLabel *m18Label;
    QLabel *m19Label;
    QLabel *m20Label;
    QLabel *m21Label;
    QLabel *m22Label;
    QLabel *m1Label;
    QLabel *m2Label;
    QLabel *m3Label;
    QLabel *m4Label;
    QLabel *m5Label;
    QLabel *m7Label;
    QLabel *m6Label;
    QLabel *m8Label;
    QLabel *m9Label;
    QLabel *m11Label;
    QLabel *m12Label;
    QLabel *m10Label;
    QGroupBox *motorCommandBox;
    QPushButton *nextStepButton;
    QPushButton *releaseMotorButton;
    QSpinBox *releaseMotorSpinBox;
    QPushButton *releaseAllMotorButton;
    QPushButton *engageMotorButton;
    QSpinBox *engageMotorSpinBox;
    QPushButton *engageAllMotorButton;
    QPushButton *releaseLeftLegButton;
    QPushButton *releaseRightLegButton;
    QPushButton *engageLeftLegButton;
    QPushButton *engageRightLegButton;
    QPushButton *savePositionsButton;
    QLabel *stepNumLabel;
    QGroupBox *motorValueBox;
    QRadioButton *motorTempRadioButton;
    QRadioButton *motorPosRadioButton;
    QLabel *robotLabel;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuMU_L8_Motion_Editor;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MUL8_MainView)
    {
        if (MUL8_MainView->objectName().isEmpty())
            MUL8_MainView->setObjectName(QStringLiteral("MUL8_MainView"));
        MUL8_MainView->resize(702, 554);
        centralWidget = new QWidget(MUL8_MainView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 701, 441));
        Main = new QWidget();
        Main->setObjectName(QStringLiteral("Main"));
        playMotionButton = new QPushButton(Main);
        playMotionButton->setObjectName(QStringLiteral("playMotionButton"));
        playMotionButton->setGeometry(QRect(270, 380, 131, 32));
        preExistingMotionList = new QListWidget(Main);
        preExistingMotionList->setObjectName(QStringLiteral("preExistingMotionList"));
        preExistingMotionList->setGeometry(QRect(20, 170, 261, 192));
        currentMotionPlaybackList = new QListWidget(Main);
        currentMotionPlaybackList->setObjectName(QStringLiteral("currentMotionPlaybackList"));
        currentMotionPlaybackList->setGeometry(QRect(390, 170, 256, 192));
        line = new QFrame(Main);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(320, 180, 20, 161));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        addMotionToListButton = new QPushButton(Main);
        addMotionToListButton->setObjectName(QStringLiteral("addMotionToListButton"));
        addMotionToListButton->setGeometry(QRect(10, 120, 151, 32));
        removeMotionFromListButton = new QPushButton(Main);
        removeMotionFromListButton->setObjectName(QStringLiteral("removeMotionFromListButton"));
        removeMotionFromListButton->setGeometry(QRect(493, 120, 151, 32));
        checkBox = new QCheckBox(Main);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(300, 360, 87, 20));
        clearListButton = new QPushButton(Main);
        clearListButton->setObjectName(QStringLiteral("clearListButton"));
        clearListButton->setGeometry(QRect(540, 380, 114, 32));
        tabWidget->addTab(Main, QString());
        Edit = new QWidget();
        Edit->setObjectName(QStringLiteral("Edit"));
        MotorControlBox = new QGroupBox(Edit);
        MotorControlBox->setObjectName(QStringLiteral("MotorControlBox"));
        MotorControlBox->setGeometry(QRect(70, 0, 591, 401));
        m24Label = new QLabel(MotorControlBox);
        m24Label->setObjectName(QStringLiteral("m24Label"));
        m24Label->setGeometry(QRect(370, 20, 62, 16));
        m24Label->setLayoutDirection(Qt::LeftToRight);
        m24Label->setAlignment(Qt::AlignCenter);
        m23Label = new QLabel(MotorControlBox);
        m23Label->setObjectName(QStringLiteral("m23Label"));
        m23Label->setGeometry(QRect(370, 40, 62, 16));
        m23Label->setLayoutDirection(Qt::LeftToRight);
        m23Label->setAlignment(Qt::AlignCenter);
        m15Label = new QLabel(MotorControlBox);
        m15Label->setObjectName(QStringLiteral("m15Label"));
        m15Label->setGeometry(QRect(320, 60, 62, 21));
        m15Label->setLayoutDirection(Qt::LeftToRight);
        m15Label->setAlignment(Qt::AlignCenter);
        m16Label = new QLabel(MotorControlBox);
        m16Label->setObjectName(QStringLiteral("m16Label"));
        m16Label->setGeometry(QRect(430, 60, 62, 21));
        m16Label->setLayoutDirection(Qt::LeftToRight);
        m16Label->setAlignment(Qt::AlignCenter);
        m13Label = new QLabel(MotorControlBox);
        m13Label->setObjectName(QStringLiteral("m13Label"));
        m13Label->setGeometry(QRect(250, 60, 62, 21));
        m13Label->setLayoutDirection(Qt::LeftToRight);
        m13Label->setAlignment(Qt::AlignCenter);
        m14Label = new QLabel(MotorControlBox);
        m14Label->setObjectName(QStringLiteral("m14Label"));
        m14Label->setGeometry(QRect(500, 60, 62, 21));
        m14Label->setLayoutDirection(Qt::LeftToRight);
        m14Label->setAlignment(Qt::AlignCenter);
        m17Label = new QLabel(MotorControlBox);
        m17Label->setObjectName(QStringLiteral("m17Label"));
        m17Label->setGeometry(QRect(250, 120, 62, 21));
        m17Label->setLayoutDirection(Qt::LeftToRight);
        m17Label->setAlignment(Qt::AlignCenter);
        m18Label = new QLabel(MotorControlBox);
        m18Label->setObjectName(QStringLiteral("m18Label"));
        m18Label->setGeometry(QRect(500, 120, 62, 21));
        m18Label->setLayoutDirection(Qt::LeftToRight);
        m18Label->setAlignment(Qt::AlignCenter);
        m19Label = new QLabel(MotorControlBox);
        m19Label->setObjectName(QStringLiteral("m19Label"));
        m19Label->setGeometry(QRect(250, 180, 62, 21));
        m19Label->setLayoutDirection(Qt::LeftToRight);
        m19Label->setAlignment(Qt::AlignCenter);
        m20Label = new QLabel(MotorControlBox);
        m20Label->setObjectName(QStringLiteral("m20Label"));
        m20Label->setGeometry(QRect(500, 180, 62, 21));
        m20Label->setLayoutDirection(Qt::LeftToRight);
        m20Label->setAlignment(Qt::AlignCenter);
        m21Label = new QLabel(MotorControlBox);
        m21Label->setObjectName(QStringLiteral("m21Label"));
        m21Label->setGeometry(QRect(250, 200, 62, 21));
        m21Label->setLayoutDirection(Qt::LeftToRight);
        m21Label->setAlignment(Qt::AlignCenter);
        m22Label = new QLabel(MotorControlBox);
        m22Label->setObjectName(QStringLiteral("m22Label"));
        m22Label->setGeometry(QRect(500, 200, 62, 21));
        m22Label->setLayoutDirection(Qt::LeftToRight);
        m22Label->setAlignment(Qt::AlignCenter);
        m1Label = new QLabel(MotorControlBox);
        m1Label->setObjectName(QStringLiteral("m1Label"));
        m1Label->setGeometry(QRect(340, 190, 62, 21));
        m1Label->setLayoutDirection(Qt::LeftToRight);
        m1Label->setAlignment(Qt::AlignCenter);
        m2Label = new QLabel(MotorControlBox);
        m2Label->setObjectName(QStringLiteral("m2Label"));
        m2Label->setGeometry(QRect(410, 190, 62, 21));
        m2Label->setLayoutDirection(Qt::LeftToRight);
        m2Label->setAlignment(Qt::AlignCenter);
        m3Label = new QLabel(MotorControlBox);
        m3Label->setObjectName(QStringLiteral("m3Label"));
        m3Label->setGeometry(QRect(340, 210, 62, 21));
        m3Label->setLayoutDirection(Qt::LeftToRight);
        m3Label->setAlignment(Qt::AlignCenter);
        m4Label = new QLabel(MotorControlBox);
        m4Label->setObjectName(QStringLiteral("m4Label"));
        m4Label->setGeometry(QRect(410, 210, 62, 21));
        m4Label->setLayoutDirection(Qt::LeftToRight);
        m4Label->setAlignment(Qt::AlignCenter);
        m5Label = new QLabel(MotorControlBox);
        m5Label->setObjectName(QStringLiteral("m5Label"));
        m5Label->setGeometry(QRect(340, 250, 62, 21));
        m5Label->setLayoutDirection(Qt::LeftToRight);
        m5Label->setAlignment(Qt::AlignCenter);
        m7Label = new QLabel(MotorControlBox);
        m7Label->setObjectName(QStringLiteral("m7Label"));
        m7Label->setGeometry(QRect(340, 270, 62, 21));
        m7Label->setLayoutDirection(Qt::LeftToRight);
        m7Label->setAlignment(Qt::AlignCenter);
        m6Label = new QLabel(MotorControlBox);
        m6Label->setObjectName(QStringLiteral("m6Label"));
        m6Label->setGeometry(QRect(410, 250, 62, 21));
        m6Label->setLayoutDirection(Qt::LeftToRight);
        m6Label->setAlignment(Qt::AlignCenter);
        m8Label = new QLabel(MotorControlBox);
        m8Label->setObjectName(QStringLiteral("m8Label"));
        m8Label->setGeometry(QRect(410, 270, 62, 21));
        m8Label->setLayoutDirection(Qt::LeftToRight);
        m8Label->setAlignment(Qt::AlignCenter);
        m9Label = new QLabel(MotorControlBox);
        m9Label->setObjectName(QStringLiteral("m9Label"));
        m9Label->setGeometry(QRect(340, 330, 62, 21));
        m9Label->setLayoutDirection(Qt::LeftToRight);
        m9Label->setAlignment(Qt::AlignCenter);
        m11Label = new QLabel(MotorControlBox);
        m11Label->setObjectName(QStringLiteral("m11Label"));
        m11Label->setGeometry(QRect(340, 310, 62, 21));
        m11Label->setLayoutDirection(Qt::LeftToRight);
        m11Label->setAlignment(Qt::AlignCenter);
        m12Label = new QLabel(MotorControlBox);
        m12Label->setObjectName(QStringLiteral("m12Label"));
        m12Label->setGeometry(QRect(410, 310, 62, 21));
        m12Label->setLayoutDirection(Qt::LeftToRight);
        m12Label->setAlignment(Qt::AlignCenter);
        m10Label = new QLabel(MotorControlBox);
        m10Label->setObjectName(QStringLiteral("m10Label"));
        m10Label->setGeometry(QRect(410, 330, 62, 21));
        m10Label->setLayoutDirection(Qt::LeftToRight);
        m10Label->setAlignment(Qt::AlignCenter);
        motorCommandBox = new QGroupBox(MotorControlBox);
        motorCommandBox->setObjectName(QStringLiteral("motorCommandBox"));
        motorCommandBox->setGeometry(QRect(20, 20, 181, 371));
        nextStepButton = new QPushButton(motorCommandBox);
        nextStepButton->setObjectName(QStringLiteral("nextStepButton"));
        nextStepButton->setGeometry(QRect(10, 20, 114, 32));
        releaseMotorButton = new QPushButton(motorCommandBox);
        releaseMotorButton->setObjectName(QStringLiteral("releaseMotorButton"));
        releaseMotorButton->setGeometry(QRect(0, 260, 114, 32));
        releaseMotorSpinBox = new QSpinBox(motorCommandBox);
        releaseMotorSpinBox->setObjectName(QStringLiteral("releaseMotorSpinBox"));
        releaseMotorSpinBox->setGeometry(QRect(120, 260, 49, 32));
        releaseMotorSpinBox->setMinimum(1);
        releaseMotorSpinBox->setMaximum(24);
        releaseAllMotorButton = new QPushButton(motorCommandBox);
        releaseAllMotorButton->setObjectName(QStringLiteral("releaseAllMotorButton"));
        releaseAllMotorButton->setGeometry(QRect(20, 290, 141, 32));
        engageMotorButton = new QPushButton(motorCommandBox);
        engageMotorButton->setObjectName(QStringLiteral("engageMotorButton"));
        engageMotorButton->setGeometry(QRect(0, 190, 114, 32));
        engageMotorSpinBox = new QSpinBox(motorCommandBox);
        engageMotorSpinBox->setObjectName(QStringLiteral("engageMotorSpinBox"));
        engageMotorSpinBox->setGeometry(QRect(120, 190, 49, 32));
        engageMotorSpinBox->setMinimum(1);
        engageMotorSpinBox->setMaximum(24);
        engageAllMotorButton = new QPushButton(motorCommandBox);
        engageAllMotorButton->setObjectName(QStringLiteral("engageAllMotorButton"));
        engageAllMotorButton->setGeometry(QRect(20, 220, 141, 32));
        releaseLeftLegButton = new QPushButton(motorCommandBox);
        releaseLeftLegButton->setObjectName(QStringLiteral("releaseLeftLegButton"));
        releaseLeftLegButton->setGeometry(QRect(20, 50, 141, 32));
        releaseRightLegButton = new QPushButton(motorCommandBox);
        releaseRightLegButton->setObjectName(QStringLiteral("releaseRightLegButton"));
        releaseRightLegButton->setGeometry(QRect(20, 120, 141, 32));
        engageLeftLegButton = new QPushButton(motorCommandBox);
        engageLeftLegButton->setObjectName(QStringLiteral("engageLeftLegButton"));
        engageLeftLegButton->setGeometry(QRect(20, 80, 141, 32));
        engageRightLegButton = new QPushButton(motorCommandBox);
        engageRightLegButton->setObjectName(QStringLiteral("engageRightLegButton"));
        engageRightLegButton->setGeometry(QRect(20, 150, 141, 32));
        savePositionsButton = new QPushButton(motorCommandBox);
        savePositionsButton->setObjectName(QStringLiteral("savePositionsButton"));
        savePositionsButton->setGeometry(QRect(20, 330, 141, 32));
        stepNumLabel = new QLabel(motorCommandBox);
        stepNumLabel->setObjectName(QStringLiteral("stepNumLabel"));
        stepNumLabel->setGeometry(QRect(130, 20, 21, 32));
        motorValueBox = new QGroupBox(MotorControlBox);
        motorValueBox->setObjectName(QStringLiteral("motorValueBox"));
        motorValueBox->setGeometry(QRect(209, 270, 131, 121));
        motorTempRadioButton = new QRadioButton(motorValueBox);
        motorTempRadioButton->setObjectName(QStringLiteral("motorTempRadioButton"));
        motorTempRadioButton->setGeometry(QRect(0, 60, 131, 20));
        motorPosRadioButton = new QRadioButton(motorValueBox);
        motorPosRadioButton->setObjectName(QStringLiteral("motorPosRadioButton"));
        motorPosRadioButton->setGeometry(QRect(0, 30, 131, 20));
        robotLabel = new QLabel(MotorControlBox);
        robotLabel->setObjectName(QStringLiteral("robotLabel"));
        robotLabel->setGeometry(QRect(360, 120, 91, 20));
        tabWidget->addTab(Edit, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 114, 32));
        MUL8_MainView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MUL8_MainView);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 702, 22));
        menuMU_L8_Motion_Editor = new QMenu(menuBar);
        menuMU_L8_Motion_Editor->setObjectName(QStringLiteral("menuMU_L8_Motion_Editor"));
        MUL8_MainView->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MUL8_MainView);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MUL8_MainView->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MUL8_MainView);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MUL8_MainView->setStatusBar(statusBar);

        menuBar->addAction(menuMU_L8_Motion_Editor->menuAction());

        retranslateUi(MUL8_MainView);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MUL8_MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MUL8_MainView)
    {
        MUL8_MainView->setWindowTitle(QApplication::translate("MUL8_MainView", "MainWindow", 0));
        playMotionButton->setText(QApplication::translate("MUL8_MainView", "Play Motion", 0));
        addMotionToListButton->setText(QApplication::translate("MUL8_MainView", "Add Motion", 0));
        removeMotionFromListButton->setText(QApplication::translate("MUL8_MainView", "Remove Motion", 0));
        checkBox->setText(QApplication::translate("MUL8_MainView", "Accept", 0));
        clearListButton->setText(QApplication::translate("MUL8_MainView", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(Main), QApplication::translate("MUL8_MainView", "Main", 0));
        MotorControlBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Positions", 0));
        m24Label->setText(QApplication::translate("MUL8_MainView", "24:", 0));
        m23Label->setText(QApplication::translate("MUL8_MainView", "23:", 0));
        m15Label->setText(QApplication::translate("MUL8_MainView", "15:", 0));
        m16Label->setText(QApplication::translate("MUL8_MainView", "16:", 0));
        m13Label->setText(QApplication::translate("MUL8_MainView", "13:", 0));
        m14Label->setText(QApplication::translate("MUL8_MainView", "14:", 0));
        m17Label->setText(QApplication::translate("MUL8_MainView", "17:", 0));
        m18Label->setText(QApplication::translate("MUL8_MainView", "18:", 0));
        m19Label->setText(QApplication::translate("MUL8_MainView", "19:", 0));
        m20Label->setText(QApplication::translate("MUL8_MainView", "20:", 0));
        m21Label->setText(QApplication::translate("MUL8_MainView", "21:", 0));
        m22Label->setText(QApplication::translate("MUL8_MainView", "22:", 0));
        m1Label->setText(QApplication::translate("MUL8_MainView", "1:", 0));
        m2Label->setText(QApplication::translate("MUL8_MainView", "2:", 0));
        m3Label->setText(QApplication::translate("MUL8_MainView", "3:", 0));
        m4Label->setText(QApplication::translate("MUL8_MainView", "4:", 0));
        m5Label->setText(QApplication::translate("MUL8_MainView", "5:", 0));
        m7Label->setText(QApplication::translate("MUL8_MainView", "7:", 0));
        m6Label->setText(QApplication::translate("MUL8_MainView", "6:", 0));
        m8Label->setText(QApplication::translate("MUL8_MainView", "8:", 0));
        m9Label->setText(QApplication::translate("MUL8_MainView", "9:", 0));
        m11Label->setText(QApplication::translate("MUL8_MainView", "11:", 0));
        m12Label->setText(QApplication::translate("MUL8_MainView", "12:", 0));
        m10Label->setText(QApplication::translate("MUL8_MainView", "10:", 0));
        motorCommandBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Commands", 0));
        nextStepButton->setText(QApplication::translate("MUL8_MainView", "Next Step", 0));
        releaseMotorButton->setText(QApplication::translate("MUL8_MainView", "Release Motor", 0));
        releaseAllMotorButton->setText(QApplication::translate("MUL8_MainView", "Release All Motors", 0));
        engageMotorButton->setText(QApplication::translate("MUL8_MainView", "Engage Motor", 0));
        engageAllMotorButton->setText(QApplication::translate("MUL8_MainView", "Engage All Motors", 0));
        releaseLeftLegButton->setText(QApplication::translate("MUL8_MainView", "Release Left Leg", 0));
        releaseRightLegButton->setText(QApplication::translate("MUL8_MainView", "Release Right Leg", 0));
        engageLeftLegButton->setText(QApplication::translate("MUL8_MainView", "Engage Left Leg", 0));
        engageRightLegButton->setText(QApplication::translate("MUL8_MainView", "Engage Right Leg", 0));
        savePositionsButton->setText(QApplication::translate("MUL8_MainView", "Save Positions", 0));
        stepNumLabel->setText(QApplication::translate("MUL8_MainView", "1", 0));
        motorValueBox->setTitle(QApplication::translate("MUL8_MainView", "Motor Values", 0));
        motorTempRadioButton->setText(QApplication::translate("MUL8_MainView", "Motor Temp", 0));
        motorPosRadioButton->setText(QApplication::translate("MUL8_MainView", "Motor Position", 0));
        robotLabel->setText(QApplication::translate("MUL8_MainView", "Robot Motors", 0));
        tabWidget->setTabText(tabWidget->indexOf(Edit), QApplication::translate("MUL8_MainView", "Edit", 0));
        pushButton->setText(QApplication::translate("MUL8_MainView", "Connect", 0));
        menuMU_L8_Motion_Editor->setTitle(QApplication::translate("MUL8_MainView", "MU-L8 Motion Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class MUL8_MainView: public Ui_MUL8_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUL8_MAINVIEW_H
