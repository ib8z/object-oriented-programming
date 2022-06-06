/*
في المثال التالي قمنا بتعريف كلاس إسمه Person
يحتوي على متغير ثابت إسمه name
بالإضافة إلى كونستركتور يسمح لنا بتمرير قيمة للثابت name
*/
#include <iostream>
using namespace std;

// Person هنا قمنا بإنشاء كلاس إسمه
class Person
{
public:
    // name هنا قمنا بتعريف خاصية للكلاس(متغير) ثابت إسمه
    const string name;

    // هنا قمنا بتعريف كونستركتور يجب إعطاؤه قيمة عند استدعاؤه
    Person(string n):name(n)
    {       }
};



int main()
{
    // و تمرير له باراميتر C1 إسمه Person هنا قمنا بإنشاء كائن من الكلاس
    Person C1("GK");

    // C1 التي يملكها الكائن name هنا قمنا بعرض قيمة الخاصية
    cout << "C1 Name = " << C1.name << endl;

    return 0;
}