/*
عندما يرث كلاس من اخر ويريد ان يستتخدم دالة ولاكن هذه الدالة ناقصة من ناحية الكلاس الجديد يريد ان يغير فيها او يعدل فيها وتكون نفس الاسم
يعني بالمختصر عندما تريد التعديل على الدالة التي ورثتها من الكلاس الاب لانها ناقصة للكلاس الذي ورثها 

عندما تريد ان تعمل Overriding
لدالة يجب ان تكون نفس الاسم ونفس البارميتر الذي تأخذه 
*/

/*
في المثال التالي:
قمنا بأنشاء كلاسين وهما 
Person و Student

في الكلاس Person:
قمنا بكتابة كونستركتر للكلاس لكي تعطي قيم اولية للخصائص وبعدها اضفنا دالة تقوم بطباعة البيانات بشكل مرتب

في الكلاس Student:
جعلناه يرث من الكلاس Person
وبعدها قمنا بالتعديل على الدالة التي ورثها من الكلاس Person 
gprint() التي اسمها 
التي ورثها من الكلاس الاب وقمنا بجعلها تطبع الخصائص الجديدة الموجودة في الكلاس الجديد
*/
#include <iostream>
using namespace std;


// base class | الكلاس الاب
class Person
{
public:
    string name;

    Person(){}
    Person(string NAME)
    {
        name = NAME;
    }

    //هذه الدالة تقوم بطباعة نص مع خصائص الكلاس التي يمتلكها
    void gprint()
    {
        cout << "From Person = Name: " << name << endl;
    }
};



// Derived class | الكلاس الابن
class Student: public Person
{
public:
    double GPA;

    Student(){}
    Student(string NAME ,double gpaa):Person(NAME)
    {
        GPA = gpaa;
    }

    // هنا عدلنا على الدالة التي ورثها 
    // اولا قمنا بأستدعاء نفس الدالة الموجودة في الكلاس Person
    // بعدها اضفنا ماهو نافص في الدالة التي ورثناها وقمنا بطباعة الخاصية GPA
    // لانها خاصية جديدة تعتبر خاصة في هذا الكلاس
    void gprint()
    {
        Person::gprint(); // استدعاء الدالة الموجودة في الكلاس الاب 
        cout << "From Student = GPA = " << GPA << "\n\n"; // اضافة الشي الناقص في الدالة
    }
};





int main()
{
    // هنا عرفنا كائن من الكلاس Person
    Person C1("GK");
    C1.gprint();

    // هنا عرفنا كائن من الكلاس Student
    Student C2("GK", 4.53);
    cout << endl;


    /*
    هنا عند استدعاء الدالة يذهب المترجم ليرى الكلاس Student
    هل يوجد فيه دالة اسمها gprint()
    اذا وجد الدالة سوف يستدعيها واذا لم يجدها سوف يستدعي الدالة الموجودة في الكلاس الاب
    */
    C2.gprint(); 

    // طريقة اخرى لاستدعاء الدالة
    C2.Student::gprint();
return 0;
}