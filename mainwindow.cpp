#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    plotter = new PlotterWidget();
    QHBoxLayout* main = new QHBoxLayout(this);
    QVBoxLayout* config = new QVBoxLayout(this);
    main->addLayout(config);
    main->addWidget(plotter);

    for (int j = 0; j < 3; j++) {
        QHBoxLayout* h = new QHBoxLayout;
        for (int k = 0; k < 3; k++)
        {
            QCheckBox* r = new QCheckBox(QString("Ball %1 %2")
                                         .arg((j == 0) ? "Pos" : ((j == 1) ? "Vel" : "Acc"))
                                         .arg((k == 0) ? "Length" : ((k == 1) ? "X" : "Y")), this);
            h->addWidget(r);
        }
        config->addLayout(h);
    }

    for (int h = 0; h < 2; h++)
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 3; j++) {
                QHBoxLayout* h = new QHBoxLayout;

                for (int k = 0; k < 3; k++)
                {

                    QCheckBox* r = new QCheckBox(QString("Robot_%1 %2 %3 %4")
                                                 .arg(i)
                                                 .arg((h == 0) ? "Blue" : "Yellow")
                                                 .arg((j == 0) ? "Pos" : ((j == 1) ? "Vel" : "Acc"))
                                                 .arg((k == 0) ? "Length" : ((k == 1) ? "X" : "Y")), this);
                    h->addWidget(r);
                }
                config->addLayout(h);

            }


    QWidget* w = new QWidget(this);
    w->setLayout(main);
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{
}
