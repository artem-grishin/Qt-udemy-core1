#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int calc(int offset, int age)
{
    return offset * age;
}

int catYears(int age)
{
    return calc(9, age);
}


int dogYears(int &age)
{
    return calc(7, age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age: ";
    cin >> age;

    qInfo() << "You are " << catYears (age) << " in cat years." ;
    qInfo() << "You are " << dogYears (age) << " in dog years." ;

    return a.exec();
}
