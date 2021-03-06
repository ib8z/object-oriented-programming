/*
مشكلة الوراثة المتعددة:
عندما يقوم الكلاس بوارثة أكثر من كلاس في وقت واحد فيوجد إحتمال كبير أن يرث خصائص 
و دوال عندها نفس الإسم مما يؤدي لحدوث مشكلة بسبب تشابه الاسماء  
*/

/*
في المثال التالي قمنا بتعريف كلاس إسمه A
يحتوي على دالة إسمها gprint()

و كلاس إسمه B
يحتوي على دالة ايضا إسمها gprint()

بعدها قمنا بإنشاء كلاس إسمه C
يرث من الكلاس A
و الكلاس B

هنا مشكلة لان يوجد دالتين ورثها الكلاس C
بنفس الاسم وهي gprint()
*/
#include <iostream>
using namespace std;


// A هنا قمنا بتعريف كلاس إسمه
class A 
{
public:    
    void gprint()
    {
        cout << "From Class : A \n";
    }
};


// B هنا قمنا بتعريف كلاس إسمه
class B 
{
public:
    void gprint()
    {
        cout << "From Class : B \n";
    }
    
};


// B و الكلاس A يرث من الكلاس C هنا قمنا بتعريف كلاس إسمه
class C : public B, public A 
{
    
};



int main()
{
    // C هنا قمنا بإنشاء كائن من الكلاس
    C C1;

    // gprint() هنا قمنا باستدعاء الدالة
    // سوف يحدث مشكلة لان يوجد اكثر من دالة بهذا الاسم ولا يعرف المترجم يجب اي دالة
    C1.gprint();


    //تستطيع ان تحدد الدالة من اي كلاس يستدعيها كالتالي
    // جعلنا المترجم يستدعي الدالة الموجودة في الكلاس A
    C1.A::gprint();

return 0;
}
