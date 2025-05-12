#include <iostream>
using namespace std;

class A
{
    public:
       void dina()
       {
           cout << " Hi Dina";
       }
};

class B
{
    public:
        void dina()
        {
            cout << " Hi dinaa";
        }
};

class C : public A , public B{};

int main()
{
    C obj;
    //Note:: calling the func. without scope resolution will cause the ambuigity problem. 
    obj.A::dina();
    obj.B::dina();
}