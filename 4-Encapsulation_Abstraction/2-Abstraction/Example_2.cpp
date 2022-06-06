/*
في المثال التالي:
انشئنا كلاس اسمه Counter
انشئنا فيه متغير معرف ك خاص لا يمكن الوصول اليه الى من داخل الكلاس 
بعدها قمنا بأنشاء دالة لكي تزيد قيمة الخاصية بمقدار واحد ,ودالة اخرى لكي ترجع قيمة الخاصية
*/
#include <iostream>
using namespace std;


// هنا انشئنا كلاس اسمه 
class Counter
{   
private:
    // هنا عرفنا متغير خاص لايمكن الوصول اليه الى من داخل الكلاس
    int Count =0;
public :

    // Count هنا عرفنا دالة لكي تزيد من قيمة المتغير 
    void PlusNum()
    { 
        Count++;
    }

    // هنا عرفنا دالة لكي ترجع قيمة المتغير
    int getCount () 
    {
        return Count ;
    };
};




int main () 
{
    // هنا انشئنا كائن من الكلاس
    Counter C1;

    // هنا طبعنا قيم الخاصية قبل ان نغير قيمته 
    cout << "1-Count : " << C1.getCount() << endl;
    
    // هنا قمنا بزيادة قيمة العداد بمقدار واحد
    C1.PlusNum();

    // هنا طبعنا القيمة بعد الزيادة
    cout << "2-Count : " << C1.getCount() << endl;
return 0 ;
}