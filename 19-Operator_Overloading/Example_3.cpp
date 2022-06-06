/*
في المثال التالي:
قمنا بعمل اوبريتور للعمليات المنطقية لكي يتم تطبيقها بين الكائنات وهي كالتالي:
> | < | == | != | <= | >=
العمليات المنطقية في الكلاسات (بين الكائنات)

غالبا الدوال التي تعمل العمليات المنطقية ترجع اما True او false
يعني يا 0 او 1
0 = False
1 = True
*/
#include <iostream>
using namespace std;



class Relational
{
private:
    int x, y, z;
public:
    // هنا قمنا بتعريف اثنين الكونستركتر 
    Relational()
    {
        // هنا جلعنا جميع الخصائث تساوي صفر 0
        x = y = z = 0;
    }
    Relational(int xx,int yy,int zz)
    {
        x = xx;
        y = yy;
        z = zz;
    }

    // هنا عرفنا رؤوس الاوبريتير لاننا سوف نكتب محتواهم برى الكلاس
    // بعد كلمة operator
    // سوف ترى العملية المنطقية لهذه الاوبريتير
    int operator==(Relational t);
    int operator!=(Relational t);
    int operator<=(Relational t);
    int operator>=(Relational t);
    int operator>(Relational t);
    int operator<(Relational t);
};


// هنا عرفنا الاوبريتير للعملية المنطقية: المقارنة بين القيم (تساوي)
int Relational::operator==(Relational t)
{
    if(x == t.x && y == t.y && z == t.z)
        return 1;
    else
        return 0;
    return 0;
}


// هنا عرفنا الاوبريتير للعملية المنطقية: لا تساوي 
int Relational::operator!=(Relational t)
{
    if(x != t.x && y != t.y && z != t.z)
        return 1;
    else
        return 0;
    return 0;
}


// هنا عرفنا الاوبريتير للعملية المنطقية: اصغر من او تساوي
int Relational::operator<=(Relational t)
{
    if(x <= t.x && y <= t.y && z <= t.z)
        return 1;
    else
        return 0;
    return 0;
}


// هنا عرفنا الاوبريتير للعملية المنطقية: اكبر من او تساوي
int Relational::operator>=(Relational t)
{
    if(x >= t.x && y >= t.y && z >= t.z)
        return 1;
    else
        return 0;
    return 0;
}


// هنا عرفنا الاوبريتير للعملية المنطقية: اصغر من
int Relational::operator<(Relational t)
{
    if(x < t.x && y < t.y && z < t.z)
        return 1;
    else
        return 0;
    return 0;
}


// هنا عرفنا الاوبريتير للعملية المنطقية: اكبر من 
int Relational::operator>(Relational t)
{
    if(x > t.x && y > t.y && z > t.z)
        return 1;
    else
        return 0;
    return 0;
}




// main هنا عرفنا الدالة 
int main()
{
    // هنا انشئنا كائنين لكي نعمل بين بعضهم العمليات المنطقية
    Relational C2(10, 20, 30), C3(10, 20, 30);

    // في الاسطر التالية قمنا بتطبيق جميع العمليات المنطقية التي كتبناها

    // المقارنة | ==
    if(C2 == C3)
        cout << "\nTrue";
    else
        cout << "\nFalse";

    // لا تساوي | !=
    if(C2 != C3)
        cout << "\nTrue";
    else
        cout << "\nFalse\n\n";        


    // اصغر من او تساوي | <=
    if(C2 <= C3)
        cout << "\nTrue";
    else
        cout << "\nFalse";


    // اكبر من او تساوي | >=
    if(C2 >= C3)
        cout << "\nTrue";
    else
        cout << "\nFalse";


    // اكبر من  | >
    if(C2 > C3)
        cout << "\nTrue";
    else
        cout << "\nFalse";


    // اصغر من | <
    if(C2 < C3)
        cout << "\nTrue";
    else
        cout << "\nFalse";

return 0;
}