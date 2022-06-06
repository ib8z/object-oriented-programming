/*
في المثال التالي لدينا كلاسين واسمهما:
Person و Student

انشئنا في الكلاس Person
كونستركتر و انشئنا دالتين لاعطاء قيمة للخاصية وارجاع قيمة الخاصية التي موجودة في الكلاس Person
بعدها انشئنا دالة لكي تعرض نص وبعدها تطبع قيمة name

بعدها انشئنا كلاس جديد اسمه Student
وجعلناه يرث من الكلاس Person
وبعدها انشئنا خاصية جديدة للكلاس Student
اسمها GPA
بعدها اعطينا قيمة للاسم name
التي ورثها من الكلاس الاب
*/
#include <iostream>
using namespace std;


// هنا انشئنا كلاس اسمه Person
class Person
{
private:
    string name;
public:
    // هنا عرفنا الكونستركتر
    Person():name("Non")
    {       }
    // دالة لاعطاء قيمة للخاصية name
    void set_name(string na)
    {
        name = na;
    }
    // دالة لارجاع قيمة الخاصية name
    string get_name()
    {
        return name;
    }
    // دالة لطباعة نص وبعدها يتم طباعة قيمة الخاصية name
    void print()
    {
        cout << "\nname: " << get_name() << "\n";
    }
};


// هنا عرفنا كلاس جديد يرث من الكلاس Person
// وعرفنا دالتين جديدة لكي تعطي قيمة وارجاع قيمة للخاصية الجديدة الموجودة في الكلاس
class Student: public Person
{
public:
    double GPA;
    double get_GPA()
    {
        return GPA;
    }

    void set_GPA(double g)
    {
        GPA = g;
    }
};




int main()
{
    // انشئنا كائن من الكلاس Person
    Person C1;
    // اعطيناه قيمة وبعدها قمنا بطباعة القيمة من خلال استدعاء الدالة
    C1.set_name("Mohammed");
    C1.print();


    // هنا انشئنا كائن من الكلاس Student
    // الذي يرث من الكلاس Person
    Student C2;
    // هنا اعطينا قيم للخصائص التي يمتلكها الكائن بعدها قمنا بطباعتها
    C2.set_name("GK");
    C2.set_GPA(3.74);

    // هنا قمنا بطباعة خصائص الكائن
    C2.print();
    cout << "GPA: " << C2.GPA << endl;

return 0;
}