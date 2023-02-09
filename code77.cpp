#include <iostream>
using namespace std;

int max(int arr[], int num)
{
    int i;
    int max = arr[0];
    for (i = 1; i < num; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[100], num;

    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    cout << "max number is a   " << max(arr, num);
    return 0;
}