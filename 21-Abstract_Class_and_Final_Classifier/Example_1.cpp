/*
Abstract Class:

بكل بساطة عبارة عن نموذج يعني يكون فيه مجموعة دوال (تعريف للدوال فقط ولا يتم كتابة اكواد داخل الدالة فقط تعريف للدالة)
يتم تعريفها ك نموذج للكلاسات التي سوف ترث منها حتى تكون الكلاسات التي ترث منها ملتزمة في النموذج (الدوال وغيرها)
الكلاس الذي يكون Abstract 
لا يمكن ان تنشئ منه كائن object

لكي تجعل الدالة Abstract 
يجب ان لا يكون لها اكواد داخل الدالة فقط تعريف وايضا تكتب بجانب اقواس الدالة =0
وتكتب في البداية كلمة virtual
مثال:
virtual void Set_name(string)  =0;
*/


/*
Final Classifier:

وهو بكل بساطة ان الدالة ممنوع يعمل لها اعادة كتابة (يتم تعريفها في كلاس اخر بتعريف مختلف عن الكلاس الاب)
يعني بالعربي تكون الدالة ثابتة ولا احد يستطيع ان يغير محتوى الدالة من الكلاسات التي ترث من هذا الكلاس الاب
*/



/*
في المثال التالي:
انشئنا كلاس اسمه Vehicle
ليكون نموذج للكلاسات التي سوف ترث من هذا الكلاس وعرفنا فيه دوال بدون كتابة اكواد للدوال هذه

بعدها انشئنا كلاس اخر وجعلناه يرث من الكلاس Vehicle
وقمنا بكتابة الدوال التي ورثها 
*/
#include <iostream>
using namespace std;


// Abstract class
class Vehicle 
{
public:
    // هنا جعلنا هذه الدالة لا يمكن اعادة تعريفها (يعني بالعامية: مايمديك تغير محتواها عندما ترثها)
    virtual void By() final
    {
        cout << "\nBy : GK\n\n";
    }

    // هنا عرفنا الدوال التي سوف تكون نموذج للكلاسات التي سوف ترث من هذا الكلاس
    virtual void Set_name(string) =0;
    virtual void Set_model(int ) =0;
    virtual void Set_color(string) =0;
    virtual string Get_name() =0;
    virtual string Get_color() =0;
    virtual int Get_model() =0;
    virtual void info() =0;
};



// Vehicle هنا انشئنا كلاس وجعلناه يرث من الكلاس 
class Car : public Vehicle
{
private:
    int model;
    string name;
    string color;
public:
    // هنا انشئنا الكونستركتر
    Car()
    {       }
    Car(string NAME, string COLOR, int MODEL): name(NAME), model(MODEL), color(COLOR)
    {       }
    
    // هنا عرفنا الدوال التي سوف تعطي قيم للخصائص
    void Set_name(string n)
    {
        name = n;
    }
    void Set_model(int m)
    {
        model = m;
    }
    void Set_color(string c)
    {
        color = c;
    }

    // هنا عرفنا دوال للتي سوف ترجع قيم للخصائص
    string Get_name()
    {
        return name;
    }
    string Get_color()
    {
        return color;
    }
    int Get_model()
    {
        return model;
    }


    // هنا عرفنا دالة لكي تطبع الخصائص بشكل مرتب
    virtual void info()
    {
        cout << "Name : "  << name  << endl;
        cout << "Model : " << model << endl; 
        cout << "Color : " << color << endl;
    }
};




int main()
{
    // هنا انشئنا كائن من الكلاس Car
    Car C2;
    // هنا انشئنا مؤشر كائن لكي يؤشر على الكائن السابق
    Vehicle* C1 = &C2;
    
    // هنا من خلال الكائن C1
    // قمنا بأعطاء قيم للكائن C2
    C1->Set_name("Ford");
    C1->Set_model(2022);
    C1->Set_color("Blue");
    
    // هنا استدعينا الدالة By
    C1->By();

    // عن استدعينا الدالة التي سوف تطبع الخصائص من الكائن C2
    C2.info();

return 0;
}