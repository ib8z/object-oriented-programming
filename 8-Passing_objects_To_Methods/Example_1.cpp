/*
Passing objects To Methods:
وهو انك تجعل الدالة تاخذ براميتر عبارة عن كائن من كلاس ويكون نوع ارجاع الدالة نفس اسم الكلاس
لانك عندما تنشئ كلاس انت انشئت نوع بيانات جديد وتعاملها كانها نوع بيانات عادي
*/



/*
في المثال التالي:

انشئنا كلاس اسمه Distance
وانشئنا في الكلاس اثنين constructor
الاول هو default 
والثاني يأخذ بارميتر لكي يعطي قيم للمتغيرات في الكلاس

بعدها انشئنا دوال ال
Getter ,Setter


وفي الاخير انشئنا دالة اسمها aggregate_feet_inches
والدالة هذه تأخذ بارميتر من النوع Distance
وترجع قيمة من النوع Distance
ووظيفة الدالة تجمع بين المتغيرين feet and inches
بين الكائن الذي يستدعي الدالة و الكائن الذي سوف يكون بارميتر
*/
#include <iostream>
using namespace std;

// هنا انشئنا الكلاس
class Distance
{
private:
    int feet;
    float inches;
public:
    // هنا عرفنا الكونستركتور
    Distance():feet(0) ,inches(0)
    {   }
    Distance(int f, float i):feet(f) ,inches(i)
    {   }

    // هنا عرفنا جميع رؤوس الدوال لاننا سوف نكتبها خارج الكلاس
    float get_inches();
    int get_feet();

    void set_feet(int s);
    void set_inches(float a);

    Distance aggregate_feet_inches(Distance C1);
};

    // هنا عرفنا دوال Getter
    int Distance::get_feet()
    {
        return feet;
    }
    float Distance::get_inches()
    {
        return inches;
    }

    // هنا عرفنا دوال Setter
    void Distance::set_feet(int s)
    {
        feet = s;
    }
    void Distance::set_inches(float a)
    {
        inches = a;
    }

    /*
     * Passing objects To Methods 
     * هنا الدالة تأخذ بارميتر نوعه Distance
     * وايضا ترجع نوع Distance
     * وهو نفس نوع الكلاس الذي انشئناه
     */
    Distance Distance::aggregate_feet_inches(Distance C1)
    {
        Distance result; // هنا انشئنا كائن جديد
        result.feet = feet + C1.feet;       // هنا جعلنا الخاصية للكائن الجديد عبارة عن جمع الخاصية للكائن الذي استدعاء الدالة وايضا خاصية كائن اخر في نفس الكلاس
        result.inches = inches + C1.inches; // هنا جعلنا الخاصية للكائن الجديد عبارة عن جمع الخاصية للكائن الذي استدعاء الدالة وايضا خاصية كائن اخر في نفس الكلاس
        /**
         * للتسهيل ستكون المعادلة كالتالي
         * القدم للكائن الجديد = قيمة القدم للكائن الذي استدعاء الدالة + قيمة القدم للكائن الذي سوف تأخذه الدالة ك بارميتير
         * البوصة للكائن الجديد = قيمة البوصة للكائن الذي استدعاء الدالة + قيمة البوصة للكائن الذي سوف تأخذه الدالة ك بارميتير
         */
        return result;
    }



int main()
{
    Distance R1(8, 4.60); // انشئنا كائن واعطيناه قيم
    Distance R2(3, 7.40); // انشئنا كائن واعطيناه قيم

    // R1 + R2 = R3
    Distance R3 = R1.aggregate_feet_inches(R2); // جمعنا بين الكائن الاول والثاني ووضعناها في الكائن الثالث 

    // هنا طبعنا قيمة الكائن R3
    // والتي سوف تكون قيمه عبارة عن جمع الكائن الاول مع الثاني
    cout << "\nFeet = " << R3.get_feet() << endl;
    cout << "inches = " << R3.get_inches() << endl;


return 0;
}