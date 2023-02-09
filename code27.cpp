#include<iostream>
using namespace std;
int main()
{
int P,C,M,H,E,marks,per;
cin>>P>>C>>M>>H>>E;
marks=P+C+M+H+E;
per=marks/5;
if(per>=60)
cout<<"A grade";
else if(per>=50)
cout<<"B grade";
else if(per>=40)
cout<<"C grade";
else if(40<per)
cout<<"D grade ";
   
return 0;










}