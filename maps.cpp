#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    std::map<string,int>m;
    map<string,int>::iterator it;
    int n = 0;
    cin >> n;
    for(int i =0; i<n;i++)
    {
        int q =0,y=0;
        string x;
        cin >> q;
        if(q==1)
        { 
            cin >> x;
            cin >> y;
            it = m.find(x);
            if(it == m.end()) 
               m.insert((make_pair(x,y)));
            else
               it->second += y;
        }
        else if(q==2)
        {
            cin >> x;
            m.erase(x);
        }
        else
        {
            cin >> x;
            it = m.find(x);
            if((it !=m.end()))
               cout << it ->second+y<<endl;
            else
               cout << 0 << endl;
        }
    }
    return 0;
}
