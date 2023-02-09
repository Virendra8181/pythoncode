#include <iostream>
using namespace std;

int main()

{
    int i;

    char str1[100];
    char str2[100];
    cin >> str1;

    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    cout << "print string " << str2;

    return 0;
}
