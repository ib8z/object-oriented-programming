/*
في المثال التالي:
قمنا بأنشاء Enumeration
اسمه Day
يحمل اسماء الايام في الاسبوع وبعدها انشئنا كائن من هذا ال Enumeration
وبعدها قمنا بطباعة نص مع قيمة الكائن
*/
#include <iostream> 
using namespace std;


// هنا عرفنا Enumeration
//اسمه يوم ويحمل اسماء الايام في الاسبوع
enum Day
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
    /**
     *  انشئنا كائن من Day 
     *  اسمه Today
     */
    Day Today = Friday; 

    /**
     * هنا طبعنا اليوم قيمته في enum
     * والذي يملكه الكائن Today
     * والقيم تبدا من اول عنصر سوف يأخذ القيم 0 حتى اخر عنصر
     * يعني الترتيب يكون مثل ترتيب المصفوفات اول عنصر يبدى من 0 ويزيد حتى اخر عنصر
     * وتستطيع ان تغير القيم سوف نشرحه في الملف التالي
     */ 
    cout << "\nToday in enum: " << Today << endl;

return 0;
}
