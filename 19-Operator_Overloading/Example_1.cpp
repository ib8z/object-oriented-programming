/*
في المثال التالي:

انشئنا كلاس يوجد فيه متغيرين 
x و y
بعدها انشئنا اثنين كونستركتير لكي يعطي قيم اولية للمتغيرات
وبعدها انشئنا دالة لعرض قيمة المتغيرين

بعدها انشئنا Operator
ثنين لكي نطرح بين كائنين والاخر لكي نجمع بين كائنين
*/
#include <iostream>
using namespace std;


// هنا انشئنا كلاس اسمه مستطيل
class rectangle
{
public:
    int x, y;
    // هنا عرفنا اثنين كونستركتير الاول الافتراضية ويضع قيمة صفر للخاصيتين والاخر يعطي قيمة للخاصيتين
    rectangle(): x(0), y(0)
    {    }
    rectangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }


    // هنا عرفنا الدالة التي سوف تطبع قيمة المتغيرين
    void print()
    {
        cout << "\nX = " << x;
        cout << "\nY = " << y << endl;
    }


    // هنا لكي نعمل عملية الجمع بين كائنين
    rectangle operator+ (rectangle f1)
    {
        rectangle f2;

        f2.x = x + f1.x;
        f2.y  = y  + f1.y;
        
        return f2;
    }

    // هنا لكي نعمل عملية الطرح بين كائنين
    rectangle operator-(rectangle f1)
    {
        rectangle f2;
        
        f2.x = x - f1.x ;
        f2.y  = y  - f1.y;
        
        return f2;
    }
};



int main()
{
    // هنا انشئنا ثلاث كائنات 
    // اثنين منهم اعطيناهم قيم والثالث لم نعطيه قيم
    rectangle C1(55 ,45), C2(5,5), C3;
    

    // C1 ,C2هنا فقط طبعنا قيمة الكائن الاول والثاني 
    cout << "\nX = "<< C1.x << " | " << C2.x;
    cout << "\nY = "<< C1.y << " | " << C2.y << "\n\n";


    // X Y هنا طبعنا قيمة الكائن قبل ان نعمل عليه عمليات حسابية لكي ترى ان قيمته تساوي 0 في كل من 
    cout << "\nC3:";
    C3.print();
    

    // :هنا جمعنا قيمة كائنين ,القانون كالتالي:
    // الكائن الثالث = الكائن الاول + الكائن الثاني
    C3 = C1 + C2;
    cout << "\n\nC1 + C2 = ";
    C3.print();


    // :هنا طرحنا قيمة كائنين ,القانون كالتالي:
    // الكائن الثالث = الكائن الاول - الكائن الثاني
    C3 = C1 - C2;
    cout << "\n\nC1 - C2 = ";
    C3.print();


return 0;
}