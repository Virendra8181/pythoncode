#include <iostream>
using namespace std;

class Swap
{
private:
    int x;
    int y;

public:
    friend int change(Swap b1);

    int get(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(){
        cout<<
    }
};

int change(Swap b1)
{
    int swap;
    swap = b1.x;
    b1.x = b1.y;
    b1.y = swap;
    return swap;
}
int main()
{
    Swap b1;
    b1.get(5, 6);
    change(b1);
    Swap b2;
    b2.display()

}