/*
كيفية التشييك على قيمة كائن من enum
بواسطة الجملة الشرطية switch:


تستطيع ان استخدم الجملة الشرطية switch
على النوع enum
ومن خلال الجملة الشرطية تستطيع ان تشيك على قيمة الكائن التي يمتكلها 
*/


/*
في المثال التالي قمنا بتعريف  enum
إسمه Days
لايام الاسبوع ويبدا من يوم الاحد وبعدها انشئنا كائن منه واعطيناه قيمة

في الأخير قمنا باستخدام الجملة switch
لكي نطبع اسم اليوم بناء على الشرط الذي وضعانه في الجملة switch
*/
#include <iostream>
using namespace std;

// Days إسمه enum هنا قمنا بتعريف
enum Days
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};



int main()
{
    // Today إسمه Days هنا قمنا بإنشاء كائن من
    Days Today;

    // هنا انشئنا كائن واعطيناه قيمة
    Today = Monday;

    /** Today هنا قمنا بالتشييك على قيمة الكائن
     * سوف يتحقق من اليوم وبعدها يتم طباعة اسم اليوم مع جملة
     * ويتحقق من ذلك من خلال الجملة الشرطية التي كتبناها في الاسفل
     */
    switch(Today)
    {
        case Sunday:
            cout << "Today is: Sunday\n";
        break;

        case Monday:
            cout << "Today is: Monday\n";
        break;

        case Tuesday:
            cout << "Today is: Tuesday\n";
        break;

        case Wednesday:
            cout << "Today is: Wednesday\n";
        break;

        case Thursday:
            cout << "Today is: Thursday\n";
        break;

        case Friday:
            cout << "Today is: Friday\n";
        break;

        case Saturday:
            cout << "Today is: Saturday\n";
        break;

        default:
            cout << "\nNon\n";
            break;
    }
return 0;
}