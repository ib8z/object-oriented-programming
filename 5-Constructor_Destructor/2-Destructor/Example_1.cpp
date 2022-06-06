/*
Destructor:

يتم استدعاء الدستركتور عندما ينتهي الكائن اي اخر شي يتم تنفيذه في الكائن هو الدستركتور
وهو عكس ال Constructor
أيّ كلاس تقوم بتعريفه, يملك ديستكرتور إفتراضي حتى لو تقم بتعريفه بنفسك
*/

/*
في المثال التالي انشئنا Constructor
لكي يعطي قيم بدائية للكائن
وبعدها انشئنا Destructor
يتم طباعة الكائن ميت بعد الانتهاء منه
*/
#include <iostream>
using namespace std;


class Destructor
{
private:
    int x, y;
public:
    Destructor(int b, int a) // Constructor | هنا عرفنا الكونستركتور
    {
        cout << endl << b << " + " << a << " = " << (b+a) << "\n";
    }

    ~Destructor() // Destructor | هنا عرفنا الدستركتور 
    {
        cout << "\nGood bye!\n";
    }
};



int main()
{
    // هنا انشئنا كائن ولاحظ لم نستدعي اي دالة
    Destructor GK(45,15);

    return 0;
}
