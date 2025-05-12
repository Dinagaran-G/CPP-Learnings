#include <iostream>
#include <conio.h>
using namespace std;

int add(int,int);
int main()
{
    int x,y,result;  //variable declaration
    cout<<"enter two integers: ";
    cin >> x >> y;
    result = add(x,y);
    cout<<"Sum of two numbers are:"<<result;
    getch();
    return 0;
}
int add(int x, int y)
{
    if(y==0)
        return x;
    else
        return(1+add(x,y-1)); //x->2 , y ->3 = 5 --> 1+(2,3-1) = 5 
}