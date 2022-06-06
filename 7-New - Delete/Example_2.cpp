/**
 * في المثال هذا انشئنا كلاس اسمه Rectangle
 * وضعنا فيه مؤشرين من نوع int
 * وانشئنا constructor 
 * يأخذ بارميتر لكي يضعها في المؤشرين في الكلاس
 * ومن خلال new
 * جعلنا قيم بدائية للمؤشرين
 * 
 * وفي destructor
 * حذفنا المتغيرين الذي عرفناهما في الكونستركتور
 */
#include <iostream>
using namespace std;

// هنا انشئنا الكلاس
class Rectangle
{
private:
    int *width, *height;
public:
    // هنا كتبنا رأس الدوال لاننا سوف نكتب محتواها خارج الكلاس
    // (الدوال و الكونستركتور تعتبر عضو في الكلاس وانما كتبنا محتواها خارج الكلاس فقط)
    Rectangle(int, int);
    ~Rectangle();
    int area();
};


/**
 * هنا كتبنا محتوى الكونستركتور
 * سوف ينشئ مؤشر على طريقة new
 * لكي يعطي قيم لخصائص الكلاس
 */
Rectangle::Rectangle(int x, int y)
{
    width = new int;
    height = new int;
    *width = x;
    *height = y;
}
// هنا كتبنا محتوى الدستركتور وجعلناه يحذف المتغيرات التي عرفناها في الكونستركتور لكي نوفر مساحة في الذاكرة العشوائية
Rectangle::~Rectangle()
{
    delete width;
    delete height;
    cout << "\nDelete = Done";
}

// هنا عرفنا دالة ترجع قيمة المستطيل من خلال ضرب = الارتفاع * العرض
int Rectangle::area()
{
    return ( *width * *height );
}




int main()
{
    // هنا عرفنا كائنين من الكلاس واعطيناهم قيم
    Rectangle c1(4, 7);
    Rectangle c2(6, 9);

    // هنا طبعنا نص وبعدها استدعينا الدالة التي سوف ترجع المعادلة الرياضية التي وضعناها
    cout << endl << "area 0 = " << c1.area() << "\n";    
    cout << endl << "area 1 = " << c2.area() << "\n";    

    /**
     * لاحظ عندما شغلنا الكود تم كتابة
     * Delete = Done
     * مرتين لان انشئنا كائنين في الاعلى
     */

return 0;
}