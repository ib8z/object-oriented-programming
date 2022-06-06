/*
في المثال التالي:
عرفنا كلاس اسمه super
عرفنا فيه ثنين كونستركتر Constructor
واحد الافتراضي والاخر مع بارميتر

وبعدها عرفنا كلاس اسمه second
ايضا عرفنا فيه ثنين كونستركتر Constructor
واحد الافتراضي والاخر مع بارميتر
وجعلنا الذي يأخذ بارميتير يستدعي الكونستركتر الذي يوجد في الكلاس الاب لكي يعطي بيانات للخصائص التي ورثها 
*/
#include <iostream>
using namespace std;


// هنا عرفنا الكلاس الاب
class Super
{
private:
    string name;
    int age;
public:
    Super(): name("None")
    {
        cout << "\nFrom Base class Constructor ( Default )";
    }
    Super(int Ag, string Na): age(Ag) ,name(Na)
    {
        cout << "\nFrom Base class Constructor ( Parmeter )";
    }
};


// هنا الكلاس الابن الذي يرث من الكلاس الاب
class Second: public Super
{
private:
    int Value;
public:
    // هنا استدعينا الكونستركتير من الكلاس الاب واعطيناه البارميتر الذي بين الاقواس
    // بعدها قمنا بكتابة ما نريده في الكونستركتير 
    Second(int A, string N, int Va):Super(A ,N) ,Value(Va)
    {
        cout << "\nFrom Derived class Constructor ( Parmeter )";
    }
    Second():Value(0)
    {
        cout << "\nFrom Derived class Constructor ( Default )";
    }
};



int main()
{

    /**
     *  هنا انشئنا كائنين من الكلاس Super
     *  الاول بدون اعطائه بيانات اولية من خلال الكونستركتير والاخر اعطيناه قيم
     */
    Super C1;
    Super C2(21, "GK");
    

    /**
     *  هنا انشئنا كائنين من الكلاس Second
     *  الاول بدون اعطائه بيانات اولية من خلال الكونستركتير
     *  والاخر اعطيناه قيم وسوف تلاحظ انه يجب ان نعطيه ايضا قيم للخصائص التي ورثها من خلال والتي يطلبها الكونستركتير للكلاس الاب
     */
    Second C3;
    Second C4(26 ,"Mohammed" ,105);

return 0;
}