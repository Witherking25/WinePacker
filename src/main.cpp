#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    winepacker::MainWindow mainWindow(nullptr);
    mainWindow.show();
    return QApplication::exec();
}

