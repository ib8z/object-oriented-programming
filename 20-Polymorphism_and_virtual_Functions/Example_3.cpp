/*
مبدأ تعدد الأشكال مع المصفوفات:

من أحد أنواع المصفوفات المتقدمة هو  vector
الكائن الذي تنشئه من الكلاس vector
يمكن تخزين عدد غير محدد من القيم العادية أو الكائنات بداخله و تستطيع إضافة المزيد من العناصر أو حذفها عكس المصفوفة العادية لا تستطيع ذلك.

حتى تتمكن من إنشاء كائنات من الكلاس vector
يجب أن نضمن المكتبة vector
لوضع قيمة بداخل vector
نستخدم الدالة push_back()
و للحذف نسخدم الدالة erase()
*/

/*
في المثال التالي قمنا بإعادة المثال السابق في الملف رقم 2 و لكننا هذه المرة استخدمنا النوع vector
قمنا بإنشاء كائن من الكلاس vector
إسمه AllCountry
لكي نخزن الكائنات التي أنشأناها من الكلاسات التالية
SaudiArabia | iraq
*/
#include <iostream>
#include <vector>
using namespace std;

// يحتوي على دالتين Country هنا قمنا بإنشاء كلاس اسمه
// تمثل اسم الدولة واللغة التي تتحدث فيها 
class Country
{
public:
    // virtual هنا انشئنا دالتين لاسم الدولة ولغتها وجعلناهما معرفة ك 
    virtual void NameCountry() =0;
    virtual void language() =0;
};



// هنا قمنا بأنشاء كلاس جديد وجعلناه يرث من الكلاس الساسي وبعدها قمنا بعمل اعادة تعريف للدوال التي ورثها
class SaudiArabia : public Country
{
public:
    // هنا قمنا بأعادة تعريف الدالتين التي ورثها من الكلاس الاساسي
    void NameCountry() override
    {
        cout << "From : Saudi Arabia \n";
    }
    void language() override
    {
        cout << "Language : Arabic \n";
    }
};



// هنا قمنا بأنشاء كلاس جديد وجعلناه يرث من الكلاس الساسي وبعدها قمنا بعمل اعادة تعريف للدوال التي ورثها
class iraq : public Country
{
public:
    // هنا قمنا بأعادة تعريف الدالتين التي ورثها من الكلاس الاساسي
    void NameCountry() override
    {
        cout << "From : iraq \n";
    }
    void language() override
    {
        cout << "Language : Arabic \n";
    }
};



// فتقوم بتنفيذ الدالتين المسؤلة عن اسم الدولة واللغة Country نمرر لها عنوان كائن يرث من الكلاس GPrint هنا قمنا بتعريف دالة إسمها
void GPrint(Country& country)
{
    country.NameCountry();
    country.language();
    cout << "\n\n";
}




int main()
{
    // SaudiArabia هنا عرفنا كائن من الكلاس
    SaudiArabia SA;
    // iraq هنا عرفنا كائن من الكلاس
    iraq IR;


    // Country سنضع فيه فيه مؤشرات لكائنات ترث من الكلاس AllCountry إسمه vector هنا قمنا بإنشاء كائن من الكلاس
    vector<Country*> AllCountry;


    // AllCountry في الكائن IR و SA هنا قمنا بإضافة عناوين الكائنين
    // الذي انشئناه لكي يخزن كائنات فيه
    AllCountry.push_back(&SA);
    AllCountry.push_back(&IR);


    // AllCountry هنا قمنا بإنشاء حلقة تكرار في كل مرة تمر على عنصر (مؤشر لكائن) موجود في الكائن
    // و تمرير العنصر الموجود في الكائن (أي مؤشر الكائن) لها GPrint() سوف تقوم في كل مرة تقوم بأستدعاء الدالة
    for (unsigned i=0; i < AllCountry.size(); i++)
    {
        GPrint(*AllCountry[i]);
    }

return 0;
}