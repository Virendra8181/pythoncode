#include <iostream>
using namespace std;
int main()
{
    int arr[100];

    int i, max = 0, num;
    cin>>num;

    for (i = 0; i < num; i++)
        cin >> arr[i];
    for (i = 0; i < num; i++)

    {

        if (arr[i + 1] < arr[i])
            max = arr[i];
        else
            arr[i] = arr[i + 1];
    }
    cout << max;

    return 0;
}