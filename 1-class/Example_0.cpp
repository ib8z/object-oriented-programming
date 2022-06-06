/**
 * طريقة انشاء كلاس:
 * 
 * في المثال التالي:
 * انشئنا كلاس اسمه Student
 * ويوجد فيه خواص(متغيرات) يمتكلها الكلاس وسوف يأخذها اي كائن ننشئه منه
 * بعدها انشئنا كائن من الكلاس
 */
#include <iostream>
using namespace std;

// هنا انشئنا كلاش اسمه طالب 
class Student
{
public:
    // هنا اكتب جميع البيانات التي تريد ان تخزنها على حسب نوع البيانات ونوع المتغير المناسب له
    string name;
    double GPA;
    int ID;
};



int main()
{
    // هنا انشئنا كائن من الكلاس
    Student C1;

    C1.GPA = 21;

    // هنا اعطينا قيم للطالب
    C1.name = "GK";
    C1.ID =105;
    C1.GPA = 3.75;
    
    // هنا طبعنا القيم التي اعطيناها للطالب
    cout << "\nName of Students : " <<  C1.name;
    cout << "\nID of Students : " << C1.ID;
    cout << "\nThe GPA is : " << C1.GPA << endl;

    return 0;
}
