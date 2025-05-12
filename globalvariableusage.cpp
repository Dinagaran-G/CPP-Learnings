#include <iostream>
using namespace std;
int x = 10; //global variable
void dbg()
{ 
    cout << "x = " << x << endl; 
}
int main()
{
	dbg(); //prints 10 before updating x value
	x = 5000; //updating x value
	dbg(); //prints 5000 after updated x value
}