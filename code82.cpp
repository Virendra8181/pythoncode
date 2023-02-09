#include <iostream>
using namespace std;
int main()

/*{
    string str;
    string str1;

    cin >> str;
    str1 = str;
    cout << str1;

    return 0;
}*/

{
    int i;

    char str1[100],
        char str2[20];
    cin >> str1[100];

    for (i = 0; str1[i] != '\0'; ++i)
    {
        str2[i] = str1[i];
    }
    for (i = 0; str2[i] != '\0'; ++i)
        cout << str2[i];

    return 0;
}
