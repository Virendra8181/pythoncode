#include<iostream>
using namespace std;
int main()
{
int i=1,num1,num2,hcf;
cin>>num1>>num2;


{  
    for(i=1;i<=num1||i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        hcf=i;

    }
    cout<<hcf;

}
return 0;

}