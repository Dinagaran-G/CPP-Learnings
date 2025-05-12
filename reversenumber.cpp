//reverse a number
#include<iostream>
using namespace std;

int main()
{
    int reversenum = 0;
    int num = 1234;
    while(num > 0)
    {   
        int r= num %10;
        reversenum = reversenum * 10 + r;
        num = num/10;
    } 
    cout << reversenum ;
    return 0;
}