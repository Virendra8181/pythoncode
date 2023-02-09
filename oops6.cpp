#include <iostream>
using namespace std;
class Distance
{
public:
    int feets;
    float inches;
    float sum1;
    float sum2;
    float sum;

    void set_value(int feets, float inches)
    {
        float b;
        cout << "Enter of first distance :" << endl;
        b = inches / 12;

        sum1 = (feets + b);
    }
    void set__value(int feets, float inches)
    {
        float a;

        cout << "Enter of second number :" << endl;
        a = inches / 12;

        sum2 = (feets + a);
    }
    void display()
    {
        sum = sum1 + sum2;

        cout << "Distance    " << sum;
    }
};
int main()
{
    Distance d1;
    d1.set_value(15, 6);
    d1.set__value(15, 6);
    d1.display();
}
