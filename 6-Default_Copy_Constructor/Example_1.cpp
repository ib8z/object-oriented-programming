/*
Default Copy Constructor

وهو يستخدم لكي تسوي كائن جديد يأخذ نفس مواصفات كائن موجود
*/

/*
في المثال التالي انشئنا اثنين Constructor
الاول هو يعطي قيم اولية بدون استقبال بارميتر
الثاني: يأخذ بارميتر لكي يعطي قيم للمتغيرات 
feet | inches

بعدها انشئنا دالتين وحدة لكي تعطي قيم او تغير قيم الموجودة 
والاخرى لكي تجلب المعلومات 
*/
#include <iostream>
using namespace std;


class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0)
    {   }
    Distance(int f, float i):feet(f), inches(i)
    {   }

    void set_Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }

    void get_Distance()
    {
        cout << "Feet = " << feet   << "\n";
        cout << "inches = " << inches << "\n\n";
    }
};

int main()
{
    Distance C1; // انشاء كائن جديد
    C1.set_Distance(52, 95.3); // اعطاء قيم للكائن C1
    cout << "C1:"; C1.get_Distance(); // طباعة معولمات الكائن C1

    Distance C2(C1); // انشاء كائن جديد وأخذ جميع بيانات الكائن الموجود داخل الاقواس ونسخها للكائن الجديد
    cout << "C2:"; C2.get_Distance();

    C1.set_Distance(13, 41.2); // غيرنا قيمة الكائن لكي نعطيه كائن اخر ونطبعه قيمته
    cout << "\nAfter change value\n";
    
    Distance C3 = C1; // طريقة اخرى لنسخ بيانات كائن لكائن جديد
    cout << "C3:"; C3.get_Distance(); //وهنا طبعنا قيمة الكائن C3
    
    
return 0;
}