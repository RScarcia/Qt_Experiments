#include "MainWindow.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication address(argc, argv);
    MainWindow w;
    w.show();
    return address.exec();
}
