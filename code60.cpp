#include<iostream>
using namespace std;

void swapping(int a,int b)
{
  int swap;

swap=a;
a=b;
b=swap;
cout<<a<<"   "<<b;

}
 int main()
 {
int a,b;
cin>>a>>b;
swapping(a,b);


return 0;


 }