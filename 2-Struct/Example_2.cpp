/*
تعريف دالة تأخذ باراميتر نوعه مؤشر ل struct:

للوصول للأشياء الموجودة في مؤشر لـ struct
نستخدم العامل -> و ليس العامل . الذي نستخدمه
*/

/*
في المثال التالي, قمنا بتعريف struct
إسمه Car
يمثل المعلومات التي يمكن أن تتضمنها اي سيارة ب معلومات بسيطة مثل لون السيارة واسمها وغيرها.
بعدها قمنا بتعريف دالة إسمها Print_Car_info
عند استدعاءها نمرر لها عنوان كائن من Car
موجود في الذاكرة فتقوم بطباعة البيانات التي يمتلكها
*/
#include <iostream>
using namespace std;

// Car إسمه struct هنا قمنا بتعريف
struct Car 
{
    string name;
    int model;
    string color;
};


// قمنا بتعريف دالة تقوم بطباعة قيمة المتغير 
void Print_Car_info(Car* CAR)
{
    cout << "\nName: " << CAR->name;
    cout << "\nModel: " <<CAR->model;
    cout << "\nColor: " <<CAR->color;
}



int main()
{
    // Car هنا قمنا بتعريف كائن من الكلاس 
    Car C1;

    // هنا قمنا بأعطاء قيم للكائن
    C1.name = "Toyota";
    C1.color = "Black";
    C1.model = 2022;
    
    // لها حتى تقوم بطباعة القيم الموجودة فيه C1 و تمرير عنوان الكائن Print_Car_info() هنا قمنا باستدعاء الدالة
    Print_Car_info( &C1 );

return 0;
}