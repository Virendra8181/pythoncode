#include<iostream>
using namespace std;
void myinfo()
{
 cout<<"hello world"<<endl;
cout<<"virendra"<<endl;
}
void circle()
{
 int r,area;
 cin>>r;
 area=3.14*(r*r);
 cout<<area;



}
void rec(int l,int b)
{
 int area;
 area=(2*(l+b));
 cout<<area<<endl;

}
float si(float p,float r,float t)
{
 float  a;
 a=((p*r*t)/100);
 cout<<a<<endl;
 return a;




}

int main()

{/*
myinfo();
cout<<"thanku"<<endl;
myinfo();
circle();*/
rec(3,4);

rec(5,7);
 float s=si(5000,2,6);
cout<<" simple intrest"<<s<<endl;


return 0;




}


