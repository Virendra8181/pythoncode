#include <iostream>
using namespace std;
class Calc
{

    int p, q, r;

public:
    Calc(int p, int q)
    {
        this->p = p;
        this->q = q;
        cout << "Enter value of r";
        cin >> r;
    }
    int add()
    {
        return p + q + r;
    }
};
int main()
{
    int a, b;
    cout << "Enter of two value:" << endl;
    cin >> a >> b;

    Calc s1(a, b);
    cout << "addtion is " << s1.add();
}
