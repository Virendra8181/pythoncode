#include <iostream>
using namespace std;
class constructor
{
public:
    int a, c;
    int b, d;

    constructor()
    {
        a = 5;
        b = 6;
        c = 8;
        d = 10;

        cout << "Default constructor:" << endl;
    }
    void display()
    {
        cout << a << "-" << b << endl;
        cout << c << "-" << d << endl;
    }
};
int main()
{
    constructor c;

    c.display();
    cout << c.a << "_" << c.b << endl;
    constructor c1;
    c1.display();
    cout << c1.c << "_" << c1.d;
    return 1;
}