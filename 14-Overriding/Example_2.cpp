/*
مثال يوضح كيفية استدعاء دالة موجودة في الكلاس الأب:

في المثال التالي:
انشئنا كلاس اسمه Base
توجد فيه دالة تطبع نص انه تم استدعاء الدالة من الكلاس Base

بعدها انشئنا كلاس اخر اسمه Derived
يرث من الكلاس Base
وتوجد دالة عرفناها اسمها PrintFrom() 
وظيفتها تطبع الدالة From()
من الكلاس Base
من نفس الكلاس والذي هو Derived
*/
#include <iostream>
using namespace std;



// Base هنا قمنا بتعريف كلاس إسمه
class Base
{
public:
    void From() 
    {
        cout << "From: Base\n";
    }
};



// Base يرث من الكلاس Derived هنا قمنا بتعريف الكلاس
class Derived : public Base
{
public:
    void From()
    {
        cout << "From Derived\n";
    }
    
    void PrintFrom()
    {                    // PrintFrom() عند استدعاء الدالة
        Base::From();   // Base الموجودة في الكلاس From() سيتم استدعاء الدالة
        From();         // الموجودة في نفس الكلاس From() ثم استدعاء الدالة
    }
};




int main()
{
    // Derived هنا قمنا بإنشاء كائن من الكلاس
    Derived C1;

    // Derived و التي تم تعريفها في الكلاس C1 من الكائن From() هنا قمنا باستدعاء الدالة
    C1.From();
    
    // Base و التي تم تعريفها في الكلاس C1 من الكائن From() هنا قمنا باستدعاء الدالة
    C1.Base::From();

    // و التي ستستدعي كلتا الدالتين السابقتين Derived التي تم تعريفها في الكلاس PrintFrom() هنا قمنا باستدعاء الدالة
    C1.PrintFrom();

    return 0;
}