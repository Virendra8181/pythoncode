#include <iostream>
using namespace std;
class Rectangle
{
public:
    float lenght;
    float breadth;
    float perimeter;
    float area;
    void perimeter_r()
    {
        // float perimeter;
        // cin >> lenght >> breadth;
        // cout << "Rectangle perimeter:" << perimeter << endl;
        perimeter = 2 * (lenght + breadth);
    }
    void area_r()

    {
        // float area;

        // cin >> lenght >> breadth;

        area = (lenght * breadth);

        // cout << "Reactangle area:" << area << endl;
    }
    void show()
    {
        cout << "Rectangle perimeter:" << perimeter << endl;
        cout << "Reactangle area:" << area << endl;
    }

    /*public:
    void access(float lenght,float breadth)
    {   
        float  a=lenght,b=breadth;
        void perimeter(a,b);
    }*/
};

int main()
{
    Rectangle r1;
    // int a = 2, b = 6;
    r1.lenght = 10;
    r1.breadth = 16;

    r1.perimeter_r();
    r1.area_r();
    r1.show();

    Rectangle r2;
    r2.lenght = 48;
    r2.breadth = 20;
    r2.perimeter_r();
    r2.area_r();
    r2.show();
}