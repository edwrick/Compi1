#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "nodo.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void Calcular(Nodo* padre);
    Nodo* switcher(Nodo* padre);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
