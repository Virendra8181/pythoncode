#include <iostream>
using namespace std;
class Bank
{
private:
    int AC_NO;
    string AC_Name;
    int Time;
    double Amount;
    static float Intrest;

    double Total_int;

public:
    void get_details()
    {
        cout << "Enter of AC number :" << endl;
        cin >> AC_NO;
        cout << "Enter of Holder Name:" << endl;
        cin >> AC_Name;
        cout << "Enter of Time:" << endl;
        cin >> Time;
        cout << "Enter of Amount:" << endl;
        cin >> Amount;
    }

    void call_intrest(void)
    {
        Total_int = ((Amount * Intrest * Time) / 100);
    }
    void show(void)
    {
        cout << "AC number :    " << AC_NO << endl;
        cout << "Holder Name:   " << AC_Name << endl;
        cout << "Time:          " << Time << endl;
        cout << "Amount:        " << Amount << endl;
        cout << "Total intrest: " << Total_int << endl;
    }
};
float Bank::Intrest = 0.83;

int main()
{
    Bank b1, b2, b3, b4;
    b1.get_details();
    b1.call_intrest();
    b1.show();
    b2.get_details();
    b2.call_intrest();
    b2.show();
    b3.get_details();
    b3.call_intrest();
    b3.show();
    b4.get_details();

    b4.call_intrest();
    b4.show();
}
