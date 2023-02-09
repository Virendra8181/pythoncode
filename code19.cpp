#include<iostream>
using namespace std;
int main()

{
 int a,b,c,rem1,rem2;
 int a2,a3,a4,rem3,a5,rem4;
 cout<<"Enter of no:";
 cin>>a;
 if(a>=100&&a<=999)
 {

rem1=a%10;
 b=a/10;
 c=b/10;

 rem2=c%10;
 if(rem1==rem2)
 cout<<"palindrome number";
 else
 cout<<"palindrome is not";

 }
 else if ((a>=1000)&&(a<=99999))
 {


rem1=a%10;
a2=a/10;
rem2=a2%10;
a3=a2/10;
a4=a3/10;
rem3=a4%10;
a5=a4/10;
rem4=a5%10;

 if((rem1==rem4)&&(rem2==rem3))   
 cout<<"palindrome number";
 else
 cout<<"palindrome is not";  
 }
 else 
 cout<<"Not range of Number ";

 
 return 0;









}