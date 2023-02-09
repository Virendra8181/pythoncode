#include<iostream>
using namespace std;
int main()
{
 int i,num,sum=0,rem;
 cin>>num;
 while(num>0)
 {
  rem=num%10;
  sum+=rem;
  num=num/10;





 }
 cout<<"sum of digits :"<<sum;
 return 0;
 
}