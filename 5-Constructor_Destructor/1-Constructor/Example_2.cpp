/*
تعريف Constructor
خارج الكلاس

بعض الاحيان تريد ان تنشئ كونستركتور  بدون اعطائه قيم بدائية وذلك من خلال انشاء كونستركتور فاضي ولا يأخذ بارميتر وهذا يسمى
default Constructor
*/

/*
في المثال التالي:
انشئنا كلاس اسمه Car
ويوجد بداخله 2 كونستركتور الاول هو
default Constructor
والاخر يعطي قيم افتراضية للخصائص
*/
#include <iostream>
using namespace std;

// هنا انشئنا الكلاس
class Car 
{        
public:
  string brand;  
  string model;  
  int year;      

  Car(); // هنا عرفنا الكونستركتر فاضي فقط لكي عندما نريد انشاء كائن بدون قيم بدائية لا يكون لدينا مشكلة
  Car(string x, string y, int z); // تعريف Constructor 
};

//  هنا كتبنا محتوى الكونستركتور خارج الكلاس وهو بالاصل فاضي
Car::Car()
{   }
// هنا كتبنا محتوى الكونستركتور الاخر
Car::Car(string x, string y, int z) 
{
  brand = x;
  model = y;
  year = z;
}


int main() 
{
  // هنا انشئنا كائنين واعطيناهما قيم
  Car CAR_1("BMW", "X5", 1990);
  Car CAR_2("Ford", "Mustang", 1969);
  Car CAR3; //كائن بدون قيم بدائية ولم تحدث مشكلة

  // طباعة قيمة المتغيرات التي في الكائن
  cout << "Company: " <<CAR_1.brand << "\nModel: " << CAR_1.model << "\nYear: " << CAR_1.year << "\n\n";
  cout << "Company: " <<CAR_2.brand << "\nModel: " << CAR_2.model << "\nYear: " << CAR_2.year << "\n";

return 0;
}