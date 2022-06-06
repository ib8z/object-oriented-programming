/*
في المثال التالي:
عرفنا كلاس رئيسي اسمه cPrint
ويوجد دالة فيها لكي تطبع نص مع اي كلاس تم استدعاء الدالة
وبعدها عرفنا ثلاث كلاسات ترث من هذا الكلاس وسوينا Overriding
للدوال للكلاسات التي ورثتها من الكلاس الرئيسي cPrint
*/
#include <iostream>
using namespace std;


// وبداخله دالة تقوم بطباعة نص cPrint هنا قمنا بتعريف الكلاس
class cPrint 
{
public:
    // هنا عرفنا دالة تقوم بطاعة من اي كلاس تم استدعاء الدالة
    void From()
    {
        cout << "From: cPrint\n";
    }
};



// هنا قمنا بتعريف كلاس اسمه A
// يرث من الكلاس cPrint
class A : public cPrint
{
public:
    // cPrint هنا سوينا إعادة التعريف للدالة التي ورثها من الكلاس 
    void From()
    {
        cout << "From: A\n";
    }
};



// هنا قمنا بتعريف كلاس اسمه B
// يرث من الكلاس cPrint
class B : public cPrint 
{
public:
    // cPrint هنا سوينا إعادة التعريف للدالة التي ورثها من الكلاس 
    void From()
    {
        cout << "From: B\n";
    }
};



// هنا قمنا بتعريف كلاس اسمه C
// يرث من الكلاس cPrint
class C : public cPrint 
{
public:
    // cPrint هنا سوينا إعادة التعريف للدالة التي ورثها من الكلاس 
    void From()
    {
        cout << "From: C\n";
    }
};




int main()
{
    // هنا قمنا بإنشاء كائنات من الكلاسات جميعها
    cPrint C1;
    A C2;
    B C3;
    C C4;

    //  هنا قمنا باستدعاء الدالة من كل كائن
    C1.From();
    C2.From();
    C3.From();
    C4.From();
    cout << endl;


return 0;
}

/*
داخل الكلاس 
A او B او C
لا يزال بإمكانك إستخدام الدالة From()
الموجودة في الكلاس cPrint
*/
