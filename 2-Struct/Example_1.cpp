/*
تعريف دالة تأخذ باراميتر نوعه struct:


في المثال التالي عرفنا struct
اسمه Car
يمثل المعلومات التي يمكن أن تتضمنها السيارة ب معلومات بسيطة مثل لون السيارة واسمها والموديل.
بعدها قمنا بتعريف دالة إسمها Print_Car_info 
عند استدعاءها نمرر لها كائن نوعه Car
تقوم بطباعة معلومات السيارة
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

// فتقوم بطباعة كل قيم المتغيرات الموجودة فيه Car عند استدعاءها نمرر لها كائن من Print_Car_info هنا قمنا بتعريف دالة إسمها
void Print_Car_info(Car CAR)
{
    cout << "Name: "  << CAR.name  << "\n";
    cout << "Model: " << CAR.model << "\n";
    cout << "Color: " << CAR.color << "\n";
}



int main()
{
    // هنا قمنا بتعريف كائن من Car
    Car C1;


    // هنا قمنا بأعطاء قيم للكائن
    C1.name = "Toyota";
    C1.color = "Black";
    C1.model = 2022;

    // لها حتى تقوم بطباعة القيم الموجودة فيه C1 و تمرير الكائن Print_Car_info() هنا قمنا باستدعاء الدالة
    Print_Car_info(C1);


return 0;
}