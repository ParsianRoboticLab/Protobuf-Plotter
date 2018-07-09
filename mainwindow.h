#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QButtonGroup>
#include <QCheckBox>
#include <QTreeView>
#include <QItemSelectionModel>
#include <plotterwidget.h>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    PlotterWidget* plotter;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
