#include <iostream>
using namespace std;

class A {
    public:
       void display()
       {
       std::cout << "Class A content";
       }
};

class B : public A{
       public :
         void display()
         {
         std::cout << "Over Ride the base class from A";
         }
};

class C : public B {
    public :
         void display()
         {
         std::cout << "Over Ride the base class from B";
         }

};

int main()
{
    /* you are creating the object for Class B so it will check the func. is exist in Class B if exist it will print 
     * orelse it will search from base class whether the func. is exist 
     * in this case func. is exist in Class B so o/p will be "Over Ride the base class from A" */
    B obj; 
    obj.display();
    return 0;
}