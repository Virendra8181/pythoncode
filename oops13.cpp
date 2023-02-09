#include <iostream>
using namespace std;
class Tollbooth
{
public:
    string car;
    int count = 0;

    int amount;

    Tollbooth(string s, int q)
    {
        string str = s;
        int price = q;

        if (0 < price)
            paycar(str, price);
        else
            nonpaycar();

        count++;

        void display();
    }
    void paycar(string str, int price)
    {

        amount += price;
        car += str;
    }
    void nonpaycar()
    {
        cout << "non paying car : " << car << endl;
    }
};

int main()
{

    Tollbooth t1("swift", 50), t2("xuv500", 150);
    void display();
    {
        cout << "Total number of car of passing :" << endl;
        cout << car << endl;
        cout << "Total amount of car:" << endl;
        cout << amount << endl;
        cout << count << endl;
    }
}