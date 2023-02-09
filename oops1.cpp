#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    char sname[100];
    double fees;
    void getdetail()
    {
        cout << "Enter of roll" << endl;
        cin >> roll;
        cout << "Enter of student name:" << endl;
        cin >> sname;
        cout << "Enter of fees:" << endl;
        cin >> fees;
    }
    void displayinfo()
    {
        cout << "roll no: " << roll << endl;
        cout << "student name: " << sname << endl;
        cout << "student fees: " << fees << endl;
    }
};

int main()
{
    Student s1;
    s1.getdetail();
    s1.displayinfo();
}