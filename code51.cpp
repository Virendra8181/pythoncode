#include<iostream>
using namespace std;
int main()
{ 
    int i,num,sum=0;
    cin>>num;
    for(int i=2;i<num;i++)
       
        {
    if(num%i==0){
    cout<<"number is a not prime:";
    sum+=i;
    break; }
        }
    if(sum==0)
    cout<<"prime number :";
return 0;


}