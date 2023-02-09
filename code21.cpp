#include<iostream>
using namespace std;
int main()
{
 int rem1,rem2,rem3,a,a1,a2,a3;
 cout<<"Enter of number :";
 cin>>a;
 rem1=a%10;
 a1=a/10;
 rem2=a1%10;
 a2=a1/10;
 rem3=a2%10;
 
 if(rem1>rem2)
 {
     if(rem1>rem3)
     cout<<"last digit is grater than";

 }
 else if(rem2>rem3){
     cout<<"second digit is grater than";

 }
 else 
 cout<<"first digit is grater than ";
 return 0;

}