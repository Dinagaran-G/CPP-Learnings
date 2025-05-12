#include <iostream>
using namespace std;

class dina{
    private :
       int balance;
    public :
       void set_balance(int b)
       {
           balance = b;
       }
       int get_balance()
       {
           return balance;
       }
};
int main()
{
    int balance;
    cin >> balance;
    dina d;
    d.set_balance(balance);
    cout << "balance is : " << d.get_balance();
    return 0;
}