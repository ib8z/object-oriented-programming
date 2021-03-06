/*
الخصائص ( Attributes ) 
هي الأشياء (المتغيرات, المصفوفات و الكائنات) التي يتم تعريفها بداخل الكلاس و التي سيملك نسخة خاصة منها أي كائن ننشئه منه.
أي شيء تنوي تعريفه في الكلاس لا بدل لك من تحديد كيفية الوصول إليه
لتحدد كيفية الوصول للأشياء التي تضعها في الكلاس يمكنك استخدام الكلمات المخصصة لذلك و التي يقال لها 
Access Specifiers, أي الكلمات التالية:
public
private
protected

لمعرفة الفرق كل منهم يجب قراءة الكتاب
https://github.com/ib8z
*/

#include <iostream>
using namespace std;

class MyClass 
{
  public:    // الوصول العام
    int x;   // اي شي يتم تعريفه هنا يعتبر عام

  private:   // الوصول الخاص
    int y;   // اي شي يتم تعريفه هنا يعتبر خاص

  protected: // الوصول المحمي
    int z;   // اي شي يتم تعريفه هنا يعتبر محمي
};



int main() 
{
  MyClass myObj;
  myObj.x = 25;  // يمكنك الوصول اليه بشكل مباشر
  myObj.y = 50;  // لا يمكنك الوصول اليه لانه خاص
  myObj.z = 55;  // لا يمكنك الوصول اليه لانه محمي
  return 0;
}