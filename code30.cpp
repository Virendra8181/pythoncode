#include<iostream>
using namespace std;
int main()
{
float salary,TA,DA,GS;
cin>>salary;
if(salary<=15000)

{
TA=((salary*8)/100);
DA=((salary*4)/100);
GS=salary+TA+DA;
cout<<"Calculate gross salary as gs=basic salary+TA+DA ="<<GS;

}
else 
{

TA=((salary*10)/100);
DA=((salary*5)/100);
GS=salary+TA+DA;
cout<<"Calculate gross salary as gs=basic salary+TA+DA ="<<GS;




}
return 0;

}