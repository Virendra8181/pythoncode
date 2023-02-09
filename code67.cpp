#include <iostream>
using namespace std;
int main()
{
    int *ptr1, *ptr2, sum;
    int a, b;
    cin >> a >> b;
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    cout << sum << endl;
    cout << ptr1 << "  " << ptr2 << "   " << sum;

    return 0;
}