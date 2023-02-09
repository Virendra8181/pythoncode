#include <iostream>
using namespace std;

class Swap
{
private:
    int x;
    int y;
    int temp;

public:
    friend void change(Swap b1, Swap b2, Swap b3);

    void get()
    {
        cin >> x;
    }
};

void change(Swap b1, Swap b2, Swap b3)
{
    if (b1.x > b2.y)
    {
        if (b1.x > b3.x)
            cout << b1.x << endl;
    }
    else if (b2.x > b3.x)
        cout << b2.x << endl;
    else
        cout << b3.x;
}
int main()
{
    Swap b1, b2, b3;

    b1.get();
    b2.get();
    b3.get();

    change(b1, b2, b3);
}