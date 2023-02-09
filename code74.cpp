#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << argv;

    for (int i = 0; i < argc; i++)
    {

        cout << i << "       " << argv[i] << endl;
    }
    return 0;
}