// انشاء اكثر من كائن في سطر واحد
#include <iostream>
using namespace std;

// هنا عرفنا struct
struct Car 
{
    string name;
    int model;
    string color;
};

// قمنا بتعريف دالة تقوم بطباعة القيم بشكل مرتب  
void Print_Car_info(Car* CAR)
{
    cout << "\nName: " << CAR->name;
    cout << "\nModel: " <<CAR->model;
    cout << "\nColor: " <<CAR->color;
    cout << endl;
}


int main()
{
    // انشاء اكثر من كائن بسطر واحد
    Car C1 ,C2 ,C3;

    // هنا قمنا بأعطاء قيم للكائن الاول
    C1.name = " Toyota";
    C1.color = "Black";
    C1.model = 2022;

    // هنا قمنا بأعطاء قيم للكائن الثاني
    C2.name = " Hyundai";
    C2.color = "White";
    C2.model = 2021;

    // هنا قمنا بأعطاء قيم للكائن الثالث
    C3.name = " Kia";
    C3.color = "green";
    C3.model = 2020;

    // هنا قمنا بطباعة قيمة كل كائن 
    Print_Car_info(&C1);
    Print_Car_info(&C2);
    Print_Car_info(&C3);
    return 0;
}