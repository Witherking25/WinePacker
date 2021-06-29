//
// Created by witherking25 on 6/29/21.
//

#ifndef WINEPACKER_MAINWINDOW_H
#define WINEPACKER_MAINWINDOW_H

#include <QWizard>

namespace winepacker {
    QT_BEGIN_NAMESPACE
    namespace Ui { class MainWindow; }
    QT_END_NAMESPACE

    class MainWindow : public QWizard {
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);

        ~MainWindow() override;

    private:
        Ui::MainWindow *ui;
    public slots:
        void exeSelectClicked(bool);

        void installClicked(bool);
    };
} // winepacker

#endif //WINEPACKER_MAINWINDOW_H
