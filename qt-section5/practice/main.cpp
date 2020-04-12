#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "practice output\n";

    qInfo("What is you age?");
    int age;
    cin >> age;
    qInfo() << "You are " << age << " years old.";

    qInfo("--------------------------------");
    qInfo("--------------------------------");
    qInfo("--------------------------------");
    cerr << "Error Here!"; //similar to cout but is used for error output, depending on environment it'll appear differently as output


    qInfo("--------------------------------");
    qInfo()  << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical Error!";

    qFatal("Test CRASH!");




    return a.exec();
}
