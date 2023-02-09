#include<iostream>
using namespace std;
int main()
{

for( int i=1;i<=1000;i++){
int num,rem,sum=0,s;
num=i;
s=i;

   while(num>0){
    rem=num%10;
    sum+=(rem*rem*rem);
    num=num/10;
   }

   if(s==sum)
   cout<<"armstrong number  "<<i<<endl;
   else 
   cout<<"armstrong not   "<<i<<endl;
}
return 0;

}