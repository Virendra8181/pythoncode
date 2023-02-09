#include<iostream>
using namespace std;

int  fac(int num)
{
int i,rem=1;

for(i=1;i<=num;i++)
{
rem=rem*i;
}
return rem;

}
int main()
{
    int num,sum;

    cin>>num;

    sum=fac(num);
    cout<<sum;
    return 0;


}
