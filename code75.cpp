#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cin >> argv[0];
    for (int i = 0; i < argc; i++)
        cout << argv[i];
    cout << argv[1];

    return 0;
}