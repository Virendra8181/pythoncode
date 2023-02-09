#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    int a[10][10];
    int tra[10][10];
    cout << "Enter of  number R*C" << endl;
    cin >> num1 >> num2;

    cout << "Enter of first matrix:" << endl;

    for (int i = 0; i < num1; i++)
    {

        for (int j = 0; j < num2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < num1; i++)
    {

        for (int j = 0; j < num2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter of transfer of matrix:" << endl;
    for (int i = 0; i < num2; i++)
    {
        for (int j = 0; j < num1; j++)
        {
            tra[i][j] = a[j][i];
            cout << tra[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}