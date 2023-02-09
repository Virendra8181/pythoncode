#include<iostream>
using namespace std;
int main()
{
    int num,next,t1=0,t2=1;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;

    }

return 0;



}