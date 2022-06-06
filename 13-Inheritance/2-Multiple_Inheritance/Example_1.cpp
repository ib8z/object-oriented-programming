/*
الوراثة المتتالية
وهو ان الكلاس يرث من كلاس يرث من كلاس اخر

------
في هذا المثال:

انشئنا ثلاث كلاسات وهم:
A | B | C
جعلنا الكلاس B
يرث من الكلاس A

وبعدها جعلنا الكلاس C
يرث من الكلاس B

الان الكلاس C
ورث من الكلاس A و B
لان الكلاس B
يرث من الكتاب A

وهكذا الكلاس C
اصبح يملك جميع خصائص ودوال الكلاسين 
A و B

وفي كل كلاس عرفنا فيه دالة تقوم بطباعة اسم الكلاس التي موجودة فيه
*/
#include <iostream>
using namespace std;


// A هنا قمنا بتعريف كلاس إسمه
class A 
{
public:    
    void ClassA()
    {
        cout << "From class : A\n";
    }
};

// A يرث من الكلاس B هنا قمنا بتعريف كلاس إسمه
class B: public A 
{
public:
    void ClassB()
    {
            cout << "From class : B\n";
    }
    
};

// B يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
class C: public B 
{
public:
    void ClassC()
    {
        cout << "From class : C\n";
    }
};



int main()
{
    // C1 إسمه C هنا قمنا بإنشاء كائن من الكلاس
    C C1;

    // هنا قمنا بأستدعاء جميع ما يملكه الكائن الذي عرفناه من الكلاس C
    C1.ClassA();
    C1.ClassB();
    C1.ClassC();

return 0;
}