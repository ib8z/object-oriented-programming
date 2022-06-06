/*
التغليف ( Encapsulation )

عبارة عن أسلوب يمكن اتباعه لإخفاء خصائص الكلاس و جعل الكائنات التي تنشئها منه و الكلاسات الأخرى التي تقوم بتضمينه
قادرة على التعامل مع هذه الخصائص فقط من خلال دوال يقوم بإنشائها المبرمج الأساسي للكلاس

دوال الـ 
Set و Get:

عند التعامل مع أي خاصية (متغير في الكلاس) يوجد خيارين و هما إما إعطاءه قيمة جديدة و إما الحصول على القيمة الموجودة فيه.

    إبدأ إسم كل دالة الهدف منها إعطاء قيمة للخاصية بالكلمة set
    ثم إسم الخاصية
    مثال: set_name()

    إبدأ إسم كل دالة الهدف منها الحصول على قيمة الخاصية بالكلمة 
    get ثم إسم الخاصية.
    مثال: get_name()
*/



/*
في المثال التالي:
قمنا بإنشاء كلاس إسمه Person
فكرته تخزين معلومات شخض مثل الإسم والعمر ومكان السكن

بعدها انشئنا دوال ال
Set و Get
لكي نعطي قيم للخصائص وايضا نرجع قيم للخصائص
*/
#include <iostream>
using namespace std;


// Person هنا قمنا بتعريف الكلاس
class Person 
{
// private هنا جعلنا نوع الخصائص
// لا تستطيع الوصول اليها الى من خلال الدوال
private:
    string name;
    int age;
    string City;
        
public:
    // هنا عرفنا دوال ال Get
    // والتي وظيفتهم يرجعون قيم عن خاصية معينة
    string getName() 
    {
        return name;
    }
    int getAge() 
    {
        return age;
    }
    string getCity() 
    {
        return City;
    }
 

    // هنا عرفنا دوال ال Set
    // والتي وظيفتهم يعطون قيم لخاصية معينة
    void setName(string name) 
    {
        this->name = name;
    }
    void setAge(int age) 
    {
        this->age = age;
    }
    void setCity(string City) 
    {
        this->City = City;
    }
};




int main()
{
    // C1 إسمه Person هنا قمنا بإنشاء كائن من الكلاس
    Person C1;
 
    // هنا قمنا بأعطاء الكائن قيم من خلال الدوال
    C1.setName("GK");
    C1.setCity("Riyadh");
    C1.setAge(21);
 
    // هنا قمنا بأرجاع قيم الكائن من خلال الدوال وطباعتها
    cout << "Name: " << C1.getName() << "\n";
    cout << "Age: "  << C1.getAge()  << "\n";
    cout << "City: " << C1.getCity() << "\n";
return 0;
}