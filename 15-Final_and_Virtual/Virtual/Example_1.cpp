/*
فائدة الكلمتين override و virtual 
في الوراثة:

virtual:
هي دالة عادية في كلاس معين يجب ان يعاد تعريفها في الكلاسات التي ترث من هذا الكلاس
و في الكلاس الذي يرثها من الأفضل أيضاً أن تضيف الكلمة
override
*/



/*
في المثال التالي قمنا بتعريف كلاس إسمه Base
يحتوي على دالة إسمها gprint
و نوعها virtual

بعدها قمنا بتعريف كلاس إسمه Derived
يرث من الكلاس Base
و قمنا فيه بإعادة تعريف الدالة gprint
مع إضافة الكلمة override
عند تعريفها

في الأخير قمنا بإنشاء كائن من الكلاس Derived
و من ثم استدعاء الدالة gprint()
الموجودة فيه
*/
#include <iostream>
using namespace std;



// Base هنا قمنا بتعريف كلاس إسمه
class Base
{
public:
    // هنا جعلنا هذه الدالة يجب ان يعيد تعريفها لاي كلاس يرث من هذا الكلاس
    virtual void gprint()
    {
        cout << "From: Base \n";
    }
};



//  Base يرث من الكلاس Derived هنا قمنا بتعريف الكلاس
class Derived : public Base
{
public:
    // هنا اعدنا تعريف الدالة لانها من النوع virtual
    virtual void gprint() override
    {
        cout << "From: Derived \n";
    }
};



int main()
{
    // هنا انشئنا كائن من الكلاس Derived
    Derived C1;

    // هنا استدعينا الدالة التي وظيفتها طباعة نص
    C1.gprint();
    cout << endl;

    return 0;
}