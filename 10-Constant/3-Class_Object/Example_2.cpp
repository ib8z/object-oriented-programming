/*
تعريف خصائص ثابتة في الكلاس

إذا أردت تعريف خصائص ثابتة في الكلاس, بمعنى أنه لا يمكن تغيير القيم التي نعطيهم إياها لاحقاً
لابد من اعطاء الخصائص الثابتة قيم عند انشاء الكائن وتستطيع ان تعطيهم قيم من خلال constructor
*/



/*
في المثال التالي قمنا بتعريف كلاس إسمه Person
يحتوي على ثلاث خصائص ثابتة وهي
name    age    from
بالإضافة إلى كونستركتور يسمح لنا بتمرير قيمة للثوابت وعرفنا دالة ثابتة لكي تعرف معلومات الثوابت
*/
#include <iostream>
using namespace std;


// هنا عرفنا الكلاس
class Person
{
public:
    // هنا قمنا بتعريف الخصائص الثابتة 
    const string Name;
    const int Age;
    const string From;

    // هنا قمنا بتعريف الكونستركتور
    Person(string Na, int Ag, string Fr):Name(Na) ,Age(Ag) ,From(Fr)
    {
    }

    // هنا عرفنا دالة ثابتة تقول بعرض معلومات الشخص
    void gprint() const
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "From: " << From << endl;
    }
};



int main()
{
    // هنا قمنا بتعريف كائن من الكلاس واعطائه قيم للخصائص الثابتة
    Person P1("GK" ,21 ,"Riyadh");

    // هنا استدعينا الدالة الثابتة التي سوف تعرف معلومات الشخص
    P1.gprint();

    return 0;
}