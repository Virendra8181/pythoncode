#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0,s;
    cout<<"Enter of number :";
    cin>>num;
    s=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum+=i;

    }
    if(sum==s)
    cout<<"perfect number :"<<sum;
    else 
    cout<<"Not perfect:";
    

return 0;

}