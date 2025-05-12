#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,row,col;
    cin >>row;
    cout<<"row"<<row<<endl;
    cin >>col;
    cout<<"col"<<col<<endl;
    int i,a;
    vector<vector<int>> v;
    
    for(i=0;i<row;i++)
    {
       vector<int> p;
       for(int j=0;j<col;j++)
       {
          cin>>a;
          p.push_back(a);
       } 
       v.push_back(p);
        
    } 
   for(i=0;i<v.size();i++)
   {
     for(int j=0; j<v[0].size();j++)
     {
        cout << v[i][j] <<" ";
     }
     cout << "\n";
   }
     
    return 0;
}
