#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;


int main()
{
    int num1[5] , num2[3], num3[8];
    for(int i = 0; i<5; i++)
    {
        cin >> num1[i];
    }
    for(int j=0;j<3;j++)
    {
        cin >> num2[j];
    }
    for(int k = 0; k<8;k++)
    {
        cin >> num3[k];
    }
    int m = sizeof(num1)/sizeof(num1[0]);
    int n = sizeof(num2)/sizeof(num2[0]);
    int o = sizeof(num3)/sizeof(num3[0]);
    int maxsize = max(max(m,n),o);
    int num4[maxsize];
    for(int l = 0; l < maxsize; ++l)
    {
        int sum = 0;
        if(l<m)
        {
            sum += num1[l];
        }
        if(l<n)
        {
            sum += num2[l];
        }
         if(l<o)
        {
            sum += num3[l];
        }
        num4[l] = sum;
    }
    for(int l =0;l<maxsize;++l)
    {
        cout << num4[l] <<" ";
    }
}






