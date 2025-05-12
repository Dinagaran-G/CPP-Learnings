#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,j;
    int arr1[] = {2,3,4,5,6};
    int arr2[] = {2,3,4,5,6}; //{2,3,5,6,6}
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout  << n << " " << m << endl;
    if(n != m)
    {
       return 1;
    }
    int count=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(i = 0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
           if(arr1[i]==arr2[j])
           {
              count++;
           }
        }
    }
    if(count == n)
    {
        cout<<"both array are equal"<<endl;
    }
    else
    {
        cout<<"both array not equal"<<endl;
    }
    return 0;
}