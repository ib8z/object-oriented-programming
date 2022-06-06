/*
في المثال التالي:
انشئنا كلاس اساسي يوجد فيها دالتين وهم اسم الدولة ولغتها وجعلنا هذه الدالتين يجب ان يعاد تعيفها عندما يرثها كلاس
وبعدها انشئنا كلاسين لدولتين وعملنا اعادة تعريف للدوال التي ورثها من الكلاس الاساسي

بعدها قمنا بأنشاء دالة تأخذ بارميتير عبارة عن كائن من الكلاس الاساسي لكي يطبع الدوال بشكل جميل
*/
#include <iostream>
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
    
    // هنا قمنا بأستدعاء الدالة التي كتبناها في الاعلى والتي سوف تستدعي دوال اخرى لكي تطبع اسم الدولة ولغتها
    GPrint(SA);
    GPrint(IR);

return 0;
}