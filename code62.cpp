#include<iostream>
using namespace std;

int adding(int num)
{
int rem,sum=0;
 

{
    rem=num%10;
    sum=+rem;
    
}
if(num==0)
 return 0;
return sum+adding(num=num/10);


}


int main()
{
    int num,sum;
    cin>>num;
    sum=adding(num);
   cout<<sum;
   return 0;


}