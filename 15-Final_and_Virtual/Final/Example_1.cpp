/*
طريقة تعريف كلاس ثابت لا يمكن تغير فيه شي وايضا دالة لا تستطيع ان تغير محتواها
------
اذا كتبت كلمة final
للكلاس فأنك لا تستطيع ان ترث من هذا الكلاس

اذا كتبت كلمة final
لدالة فأنك لا تستطيع ان تغير محتوى الدالة
*/
#include <iostream>
using namespace std;


// A هنا قمنا بتعريف كلاس إسمه
// وهو عبارة عن كلاس final
// لا يمكن الوراثة منه
class A final
{
public:
    void gprint()
    {
        cout << "From Final Class! \n";
    }
};



// B هنا قمنا بتعريف كلاس إسمه
class B
{
public:
    // هنا عرفنا الدالة التي لا يمكن تغير محتواها
    virtual void gprint() final
    {
        cout << "From Final Function \n";
    }
};



int main()
{
    // A هنا قمنا بإنشاء كائن من الكلاس
    A C1;
    C1.gprint();

    // B هنا قمنا بإنشاء كائن من الكلاس
    B C2;
    C2.gprint();

return 0;
}