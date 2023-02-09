#include<iostream>
using namespace std;
int main()
{
    int lastmonth,currentmonth,sum,bill;
    cout<<"Enter of reading lastmonth :";
    cin>>lastmonth;
    cout<<"Enter of reading current month:";
    cin>>currentmonth;
    sum=currentmonth-lastmonth;
    if(sum<=150)
    {
     bill=(sum*4);
     cout<<"0-150 charges 4 rs/unit is "<<bill;


    }
    else if(sum<=300)
    {
        bill=(sum*6);
        cout<<"151-300 charges 6 rs/unit "<<bill;
    }
    else if(sum<=500)
    {
        bill=(sum*8);
        cout<<"301-500 8rs/unit "<<bill;

    }
   else
   {
      bill=(sum*10);

      cout<<">500 charges 10rs/unit "<<bill;

   }
   return 0;
}