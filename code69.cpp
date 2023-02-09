#include <iostream>
using namespace std;
int main()
{
    int arr[100]={15,25,45,12,14};
  


    int i;
    int max=arr[0];                     
    for (i = 1; i < 5; i++)
    {
    
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max;


    return 0;
}