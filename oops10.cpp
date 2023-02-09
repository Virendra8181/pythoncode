#include <iostream>
using namespace std;
class Calc
{

    int p, q;

public:
    Calc(int a, int b)
    {
        p = a;
        q = b;
    }
    void add()
    {
        cout << p + q << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter of two value:" << endl;
    cin >> a >> b;

    Calc s1(a, b);
    s1.add();
    Calc s2(5, 9);
    s2.add();
}
