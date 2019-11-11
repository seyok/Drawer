#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800,600);
    QMenuBar *mBar = menuBar();
    QMenu *pFile = mBar->addMenu("File");
    QAction *pNew = pFile->addAction("New");
    pFile->addSeparator();
    QAction *pExit = pFile->addAction("Exit");
}

MainWindow::~MainWindow()
{
}

