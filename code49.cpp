#include<iostream>
using namespace std;
int main()
{
int num1,num2,max;
cin>>num1>>num2;
max=(num1>num2)?num1:num2;
while(1)
{
if(max%num1==0&&max%num2==0)
{
cout<<num1<<"  "<<num2<<"  "<<max;
break;

}
max++;
}
return  0;

}