#include <iostream>
using namespace std;
class Student
{
    int roll;
    char name[10];

public:
    Student()
    {
        cout << "Enter of roll no:" << endl;
        cin >> roll;
        cout << "Enter of name:" << endl;
        cin >> name;
    }
    void display()
    {
        cout << roll << endl
             << name;
    }
};
int main()
{

    Student s1, s2;
    s1.display();

    s2.display();
}