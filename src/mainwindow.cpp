//
// Created by witherking25 on 6/29/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QStandardPaths>
#include <QProcess>

namespace winepacker {
    QString selectedExePath;
    QProcess* installProcess;
    MainWindow::MainWindow(QWidget *parent) :
            QWizard(parent), ui(new Ui::MainWindow) {
        ui->setupUi(this);
        installProcess = new QProcess(this);
        connect(ui->exeSelectToolButton, SIGNAL(clicked(bool)), this, SLOT(exeSelectClicked(bool)));
        connect(ui->installButton, SIGNAL(clicked(bool)), this, SLOT(installClicked(bool)));
    }

    MainWindow::~MainWindow() {
        delete ui;
    }

    void MainWindow::exeSelectClicked(bool)
    {
        selectedExePath = QFileDialog::getOpenFileName(this, tr("Select executable"), QStandardPaths::writableLocation(QStandardPaths::HomeLocation),
                                     tr("Windows Executables (*.exe)"));
        ui->exeSelectLineEdit->setText(selectedExePath);
    }

    void MainWindow::installClicked(bool)
    {
        installProcess->execute("echo", QStringList() << "test");
    }

} // winepacker
