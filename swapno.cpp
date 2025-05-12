#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4, b = 5;
    
    cout << "Before swapping a = " <<
             a << " , b = " << b << endl;

    //using 3rd variable.
    /*int temp;
    temp = a;   
    a = b;
    b = temp; */

    //with bitwise operator using XOR.
    a = a xor b;
    b = b xor a;
    a = a xor b;
    cout << "After swapping a = " << a <<
            " , b = " << b << endl;
    return 0;
}