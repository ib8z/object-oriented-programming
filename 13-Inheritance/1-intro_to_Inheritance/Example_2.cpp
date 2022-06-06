/*
في المثال التالي:
انشئنا كلاس اسمه Vehicle
يملك خاصية واحدة اسمها name

وبعدها انشئنا كلاس اخر اسمه Car 
وهذا الكلاي جعلناه يرث من الكلاس Vehicle
وهذا ايضا يملك خاصية واحدة اسمها model

*/
#include <iostream>
using namespace std;


// Base class (parent) | كلاس الاب
class Vehicle 
{
public:
    string name;
};


// Derived class (child) | كلاس الابن
class Car: public Vehicle 
{
public:
    string model;
};

int main() 
{
    /**
     * هنا انشئنا كائن من الكلاس Car
     * واعطيناه قيمة للمتغير الذي يملكه وهو model
     * وايضا اعطينا قيمة للمتغير الذي ورثه وهو name
     */
    Car C1;
    C1.name = "Ford";
    C1.model = "2022";

    // هنا قمنا طباعة الخصائص
    cout << "\nFrom Car class:\n";
    cout << "name: " << C1.name << "\nModel: " << C1.model << endl;

  return 0;
}