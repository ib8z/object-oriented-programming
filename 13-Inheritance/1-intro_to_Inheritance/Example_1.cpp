/*
في المثال التالي:
انشئنا كلاس اسمه A
يملك دالة اسمها ClassA

بعدها انشئنا كلاس اخر اسمه B
يملك دالة اسمها ClassB
بعدها جعلناها يرث من الكلاس A
واستعدينا الدالة الموجودة في الكلاس A
من الكلاس B
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



int main()
{
    // B هنا انشئنا كائن من الكلاس 
    B B1;

    // هنا استدعينا الدالة الموجودة في الكلاس A
    // من الكائن الذي انشئناه من الكلاس B
    B1.ClassA();
    B1.ClassB();

return 0;
}