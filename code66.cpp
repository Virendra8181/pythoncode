#include <iostream>
using namespace std;
int main()

{
    int i, num, sum = 0;
    cin >> num;
    int arr[num];

    for (i = 0; i <= num; i++)
        cin >> arr[i];

    for (int i = 0; i <= num; i++)
        sum += arr[i];

    cout << sum;

    return 0;
}
