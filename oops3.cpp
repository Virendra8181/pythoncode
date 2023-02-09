#include <iostream>
using namespace std;
class Math
{
public:
    int a;
    int b;
    int sum;

    void add()
    {
        cout << "Enter of two number : " << endl;
        cin >> a >> b;
        sum = a + b;
    }
    void sub()
    {
        cout << "Enter of two number :" << endl;
        cin >> a >> b;
        sum = a - b;
    }
    void mul()
    {
        cout << "Enter of two number : " << endl;
        cin >> a >> b;
        sum = a * b;
    }
    void div()
    {
        cout << "Enter of two number :" << endl;
        cin >> a >> b;
        sum = a / b;
    }
    void display()
    {
        cout << "sum " << sum << endl;
    }
};
int main()
{
    Math m1;
    m1.add();
    m1.display();
    m1.sub();

    m1.display();
}