#include<iostream>
using namespace std;

 int fibonacci(int n)
{
if(n==1||n==0)
return 1;


return  fibonacci(n-1)+ fibonacci(n-2);


}
int main()
{
int num;
cin>>num;
for(int i=0;i<num;i++)
{
  fibonacci(i);
  cout<< fibonacci(i)<<" ";
}
return 0;
}