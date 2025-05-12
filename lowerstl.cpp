#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin >> n;
    vector<int> a;
    
    for(int i =0;i<n;i++)
    {
        cin >> q;
        a.push_back(q);
    }   
    sort(a.begin(),a.end());
    for(int i =0;i<a.size();i++)
    {
        
        cout << a[i] << " ";
    }
    int m,val;
    cin >> m;
    for(int i=0 ; i<m;i++)
    {
        cin >> val;
        vector<int> :: iterator lowerstl = lower_bound(a.begin(),a.end(),val);
        if(a[lowerstl-a.begin()] == val)
        {
            cout << "yes" << (lowerstl - a.begin() + 1) << endl;
        }
        else
        {
           cout << "No" << (lowerstl - a.begin() + 1) << endl;
        }
    }

    return 0;
}
