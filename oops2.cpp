#include <iostream>
using namespace std;
class Laptop
{
public:
    char brand[100];
    char model[100];
    float size;
    double price;

    void getdetail()
    {
        cout << "Enter of brand :" << endl;
        cin >> brand;
        cout << "Enter of model:" << endl;
        cin >> model;
        cout << "Enter of size :" << endl;
        cin >> size;
        cout << "Enter of price :" << endl;
        cin >> price;
    }
    void display()
    {
        cout << "Laptop brand:" << brand << endl;
        cout << "Laptop model no :" << model << endl;
        cout << "Laptop size :" << size << "inches" << endl;
        cout << "Laptop price :" << price;
    }
};
int main()
{
    Laptop l1;
    l1.getdetail();
    l1.display();
}
