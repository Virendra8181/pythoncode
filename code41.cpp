#include<iostream>
using namespace std;
int main()
{
   for(int i=1;i<=1000;i++){
 int num,s ,digits ,rev=0,rem;

 num=i;
 

 s=num;

 do
 {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;

 }while(num>0);

 if(s==rev)
 cout<<"palindrome number      "<<i<<endl;
 else 
 cout<<"palindrome number not  "<<i<<endl;

   }
return 0;
}