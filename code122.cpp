#include<iostream>
using namespace std;
int main()
{
int rem1,rem2,rem3,a1,a2,sum,n;
cin>>n;
if(n<=999)
{
 rem1=n%10;
 a1=n/10;
 rem2=a1%10;
 a2=a1/10;
 rem3=a2%10;
 sum=rem1+rem2+rem3;
 cout<<"Sum of digits "<<sum;

}
else 
cout<<"out of range";
return 0;








}