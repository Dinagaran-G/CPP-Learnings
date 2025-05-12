#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        cout << "Printing Table : " << i << endl;
        for(j=1;j<=10;j++)
        {
            cout << i << " * " << j << " = " << i*j << endl;
        }
    }
    return 0;
}