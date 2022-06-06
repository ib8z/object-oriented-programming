/*
مثال بسيط على Polymorphism
فكر في كلاس أساسي يسمى Animal 
لها method
اسمها animalSound()
يمكن أن تكون الكلاسات المشتقة من Animal
هي القطط والكلاب والطيور
ولديهم أيضًا method
الخاصة بهم لصوت الحيوانات (مواء القطط وما إلى ذلك): 
*/
#include <iostream>
using namespace std;



// Base class | هنا عرفنا الكلاس الاساسي
class Animal 
{
public:
  // هنا عرفنا دالة عامة تكون لاصوات الحيوانات كل كلاس يرثها سوف يعيد تعريفها على حسب نوع الكلاس
  virtual void animalSound() 
  {
    cout << "The animal makes a sound \n" ;
  }
};



// Derived class | هنا عرفنا كلاس جديد يرث من الكلاس الاساسي
class Cat : public Animal 
{
public:
  // هنا اعدنا تعريف الدالة لتكون مناسبة لاصوات القطط
  void animalSound() 
  {
    cout << "The cat say: meow \n" ;
  }
};



// Derived class | هنا عرفنا كلاس جديد يرث من الكلاس الاساسي
class Dog : public Animal 
{
public:
  // هنا اعدنا تعريف الدالة لتكون مناسبة لاصوات الكلاب
  void animalSound() 
  {
    cout << "The dog say: bow bow \n" ;
  }
}; 



int main()
{
  // هنا انشئنا كائنات من جميع الكلاسات
  Animal myAnimal;
  Cat myCat;
  Dog myDog;

  // هنا استدعينا جميع الدوال الموجودة من كل كائن
  myAnimal.animalSound();
  myCat.animalSound();
  myDog.animalSound();

return 0;
}