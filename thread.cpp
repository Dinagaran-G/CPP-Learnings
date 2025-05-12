#include<iostream>
#include<thread>
using namespace std;

void threadfunc(int threadi)
{
    cout<<"thread id = "<<threadi<<endl;
}

int main()
{
    const int num=5;
    std::thread th[num];
    for(int i=0;i<num;i++)
    {
        th[i]=std::thread(threadfunc,i);
       
    }
    for(int i=0;i<num;i++)
    {
        th[i].join();
    }
 return 0;
}


