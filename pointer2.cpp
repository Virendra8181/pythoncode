#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int y = 15;
    int *p1 = &x;
    int *p2 = &y;
    cout << x << "   " << y << endl;
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << x << "   " << y << endl;
}