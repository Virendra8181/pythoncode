#include <iostream>
using namespace std;
int main()
{
    int arr1[100], arr2[100], arr3[100], num;
    int i, num1, num2, c;
    cin >> num1;
    cin >> num2;

    for (int i = 0; i < num1; i++)
        cin >> arr1[i];
    for (int i = 0; i < num2; i++)
        cin >> arr2[i];

    for (i = 0; i < (num1 + num2); i++)
    {
        c = 0;

        if (num1 > i)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            c = (i - num1);
            arr3[i] = arr2[c];
        }
    }
    for (int n = 0; n < (num1 + num2); n++)
        cout << arr3[n] << " ";

    return 0;
}