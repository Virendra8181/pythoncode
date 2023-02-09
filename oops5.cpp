#include <iostream>
using namespace std;
class Complex
{
public:
    float num1;
    float num2;
    float sum;

    void set(float num1, float num2)
    {
        cout << "Number is a  " << num1 << "  Number is b  " << num2 << endl;

        sum = num1 + num2;
    }
    void complex_sum()
    {
        cout << "sum is " << sum << endl;
    }
};
int main()
{
    Complex c1;
    c1.set(5, 6);
    c1.complex_sum();
}
