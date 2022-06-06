/*
في حال أردت تعيين قيم للثوابت التي تنوي وضعها في 
enum
بنفسك بدل القيم الإفتراضية التي يضعها المترجم, يمكنك وضع أعداد صحيحة كقيم لها 
*/



/*
في المثال التالي:
قمنا بأنشاء Enumeration
اسمه Day
يحمل اسماء الايام في الاسبوع وبعدها اعطينا اول ثابت قيمة عشوائية والثوابت التي تليها سوف تبدا من بعد الرقم الذي وضعناه لاول ثابت وبعدها انشئنا كائن من هذا ال Enumeration
*/
#include <iostream>
using namespace std;

// وضعنا فيه 7 ثوابت مع إعطاء اول ثابت قيمة عشوائية  Days إسمه enum هنا قمنا بتعريف
enum Days
{
    Sunday = 50,
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
    Days Today = Sunday;

    // في الاسطر التي بالاسفل قمنا بتغير قيمة الكائن الى ثابت اخر وطبعنا قيمته لكي نرى جميع قيم الثوابت الموجودة ونرى هل تغيرت قيمتهم ام لا
    cout << "Sunday is: " << Today << endl;

    Today = Monday;
    cout << "Monday is: " << Today << endl;

    Today = Tuesday;
    cout << "Tuesday is: " << Today << endl;

    Today = Wednesday;
    cout << "Wednesday is: " << Today << endl;

    Today = Thursday;
    cout << "Thursday is: " << Today << endl;

    Today = Friday;
    cout << "Friday is: " << Today << endl;

    Today = Saturday;
    cout << "Saturday is: " << Today << endl;

return 0;
}