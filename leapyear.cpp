#include<iostream>
using namespace std;
int leapyrornot(int year);
int main()
{
    int year = 2022;
    int m = leapyrornot(year);
    string t = (m!=0)? "true" : "false";
    cout<<t;
    return 0;
}
/*this itself enough for checking leap year but we are checking 
 *true or false using ternary operator
 */
int leapyrornot(int year)
{
    if((year % 4 ==0) && (year %100 !=0) || (year %400 ==0))
    {
        cout << " leap year" << " ";
        //return 1;
    }
    else
    {
        //return 0;
        cout << "not a leap year" << " ";
    }
    return 0;
}