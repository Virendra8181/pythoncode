#include<iostream>
using namespace std;

void primenumber()
{
   int num,sum=0;
   cin>>num;
   for(int i=2;i<num;i++)
   
   {
     if(num%i==0)
      {
         cout<<"not prime number :";
          sum+=i;
          break;
      }
       
   }
   if(sum==0)
       cout<<"prime number :";
}

 int main()
 {
   primenumber();
   return 0;

 }