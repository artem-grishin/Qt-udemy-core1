#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;


struct hello
{
    int maximum;

    void getMax(int max)
    {
        maximum = max;
    }

    string showHellos()
    {
        if (maximum >= 1 && maximum <= 100)
    {
        for (int i = 1; i <= maximum; i++)
        {
            qInfo() << i << " Hello";
        }
        qFatal("Thank You!\nGoodbye!\n\n\n");
    }
    else
    {
        qFatal("You did not enter a valid number.\nGoodbye!\n\n\n");
    }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    hello  helloRepeat;
    qInfo() << "Enter a maximum (between 1 & 100): ";
    int maximum;
    cin >> maximum;
    helloRepeat.getMax(maximum);
    helloRepeat.showHellos();


    return a.exec();
}
