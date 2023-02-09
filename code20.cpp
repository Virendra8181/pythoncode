#include<iostream>
using namespace std;
int main()
{
int rem1,rem2,rem3,a,a1,a2,a3,sum;
cout<<"enter of number :";
cin>>a;
if(a<=1000)
{
rem1=a%10;
a1=a/10;
rem2=a1%10;
a2=a1/10;
rem3=a2%10;
sum=((rem1*rem1*rem1)+(rem2*rem2*rem2)+(rem3*rem3*rem3));
if(a==sum)
cout<<"Armstrong number";
else 
cout<<"Not Armstrong number";
}
else 
cout<<"Not range of no";

return 0;


}