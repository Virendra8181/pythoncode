#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    int *var;

    *var=*p;
    *p=*q;
    *q=*var;

cout<<*p<<"     " <<*q;





}

int main()
{
int *p;
int *q;

int a,b;
p=&a;
q=&b;
cin>>a>>b;
swap(p,q);
return 0;


}