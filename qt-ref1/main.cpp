#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

 enum Colors {red, green, blue = 4, silver};
    Colors mycolor = Colors::green;
    //Precurso to classes
    struct product
    {
        int weight;
        double value;
        Colors color;
    };

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*
    qInfo() << "Hey There!!!";
    qInfo() << "Hey There 2";
    qInfo("Hey There 3");
    qInfo("Hey There 4");
    */

    qInfo() << "Color: " << mycolor;

    qInfo() << " ";
    qInfo() << " ";
    qInfo() << " ";
    qInfo() << "-------------------------------";

    product laptop;
    laptop.weight = 100;
    laptop.value = 499.99;
    laptop.color = Colors::silver;

    qInfo() << "Size of product: " << sizeof(laptop);
    qInfo() << laptop.weight;
    qInfo() << laptop.value;
    qInfo() << laptop.color;

   qInfo() << " ";
   qInfo() << " ";
   qInfo() << " ";
   qInfo() << "-------------------------------";


   qInfo("What is you age?");
   int age;
   cin >> age;
   qInfo() << "You are " << age << " years old.";

   qInfo() << " ";
   qInfo() << " ";
   qInfo() << " ";
   qInfo("--------------------------------");
   cerr << "Error Here!"; //similar to cout but is used for error output, depending on environment it'll appear differently as output


   qInfo() << " ";
   qInfo() << " ";
   qInfo() << " ";
   qInfo("--------------------------------");

   qInfo() << "Enter your weight: ";
   double weight;
   cin >> weight;
   //ternary operator practice
   weight > 1 && weight < 500 ? qInfo("You entered a valid weight.") : qInfo("You entered an invalid weight.");


   qInfo() << " ";
   qInfo() << " ";
   qInfo() << " ";
   qInfo() << "-------------------------------";

   array<int, 4> ages {44, 56, 32, 16};
   for (int i : ages)
   {
       qInfo() << i;
   }





   qInfo() << " ";
   qInfo() << " ";
   qInfo() << " ";
   qInfo() << "-------------------------------";
   //other QDebug functions that are useful
   qInfo()  << "Information";
   qDebug() << "Debug";
   qCritical() << "Critical Error!";
    //great as an EOF
   qFatal("Test CRASH!");




   return a.exec();
}
