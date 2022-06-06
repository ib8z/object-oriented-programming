/*
هو بكل اختصار تجعل الكلاس يرث من اكثر من كلاس (يعني يرث اكثر من كلاس في نفس الوقت وليس كلاس واحد فقط)

ولاكن ممكن ان تواجه مشكلة والتي هي ان يكون يوجد اثنين او اكثر دوال نفس الاسم او متغيرات وغيرها
*/

/*
في هذا المثال انشئنا كلاسين رئيسيين اسمهما:
Peopel و Student
وعرفنا فيهم كونستركتر لكل من الكلاسين لكي يعطي قيم للخصائص التي يمتلكها 
وبعدها عرفنا دالة اسمها gprint()
لكل من الكلاسين حتى يتم طباعة قيمة الخصائص لكل من كلاس وخصائصه

بعدها انشئنا كلاس اسمه GK
يرث من الكلاسين الاساسين التي عرفناهما من قبل بعدها في الكلاس GK
جعلنا الكونستركتر يستدعي الكونستركتر الموجودة في الكلاسات الاساسية لكي يعطي قيمة بدائية للخصائص التي ورثها
وانشئنا في الكلاس GK
دالة اسمها Dprint()
تقوم بأستدعاء الدالة gprint()
الموجودة في الكلاس Peopel و Student
*/
#include <iostream>
using namespace std;


// هنا اعرفنا الكلاس Peopel
class Peopel
{
private:
    string name;
    int age;
public:
    Peopel(){}
    Peopel(string na, int ag):name(na), age(ag)
    {      }

    void set_name(string nn)
    {   name = nn;  }
    void set_age(int aa)
    {   age = aa;   }
    
    string get_name()
    {   return name;}
    int get_age()
    {   return age;} 

    // هذه الدالة تقوم بطباعة الخصائص التي يمتلكها الكلاس Peopel
    void gprint()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << "\n";
    }
};



// هنا عرفنا الكلاس Student
class Student
{
private:
    double GPA;
public:
    Student(){}
    Student(double gpa)
    {   
        GPA = gpa;   
    }

    void set_GPA(double gpa)
    {   GPA = gpa;   }
    double get_GPA()
    {   return GPA;   }

    // هذه الدالة تقوم بطباعة الخصائص التي يمتلكها الكلاس Student
    void gprint()
    {   cout << "GPA : " << GPA << "\n\n";    }
};



// هنا عرفنا الكلاس GK
// ويرث من الكلاسين Student و Peopel
class GK: public Student, public Peopel
{
public:
    GK(){}

    //هنا جعلناه يجلب الكونستركتر للكلاسين الذي ورث منها لكي لا تكتب الكود من جديد وهذا الشي جيد وافضل
    // ولان لا يوجد متغيرات جديدة في هذا الكلاس فلا حاجة لكي اضيف متغير خاص في هذا الكلاس
    GK(string namee,int AGE ,double gpa):Peopel(namee ,AGE) ,Student(gpa)
    {            }

    // هنا قمنا بأستدعاء الدالتين التي موجودة في كل من الكلاسين Peopel و Student
    // لكي تسهل على نفسك بالكتابة وايضا هذا الشي جيد جدا وافضل
    // ولان لا يوجد خصائص جديدة في هذا الكلاس فلا حاجة لكي اضيف شي جديد على الدالة
    void Dprint() 
    {
        Peopel::gprint();
        Student::gprint();
    }
};





int main()
{
    // هنا عرفنا كائن من الكلاس الاول وهو Peopel
    Peopel C1("Ali" ,21);
    cout << "From Peopel Class:\n";
    C1.gprint();


    // هنا عرفنا كائن من الكلاس الثاني وهو Student
    Student C2(3.47);
    cout << "\n\nFrom Student Class:\n";
    C2.gprint();


    // هنا عرفنا كائن من الكلاس الثالث الذي يرث من الكلاسين في الاعلى وهو GK
    GK C3("GK", 21 ,4.23);
    cout << "\nFrom GK Class:\n";
    C3.Dprint();

return 0;
}