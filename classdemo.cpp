#include <iostream>
using namespace std;
class Rectangle
{
    public:
    float len;
    float breadth;
    void input()
    {
        cout<<"Enter of len"<<endl;
        cin>>len;
        cout<<"Enter of breath"<<endl;
        cin>>breadth;


    }
    void area()
    {
      int area;
      area=len*breadth;
      cout<<area<<endl;

    }
    void preameter()
    {
     int preameter;
     preameter=2*(len+breadth);
     cout<<preameter<<endl;

    }

};





int main()
{
    cout << "hello world";
    Rectangle r1;
    r1.input();
    r1.area();
    r1.preameter();
    Rectangle r2;
    r2.len=5;
    r2.breadth=6;
    r2.area();
    r2.preameter();
    




}