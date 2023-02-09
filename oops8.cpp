#include <iostream>
using namespace std;
class point
{
private:
    int x;
    int y;

public:
    point()
    {
        cout << "Defalut constructor:";
    }
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << x << "_" << y;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
};
int main()
{
    point p1(5, 6);
    cout
        << p1.get_x() << "--" << p1.get_y() << endl;
    p1.display();
}