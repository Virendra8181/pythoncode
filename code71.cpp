#include <iostream>
using namespace std;
int main()
{
  int j, i, num, arr[100];
  int max;

  cin >> num;

  for (i = 0; i < num; i++)
    cin >> arr[i];

  for (i = 0; i < num; i++)
  {

    for (j = i + 1; j < num; j++)
    {

      if (arr[j] < arr[i])
      {

        max = arr[i];

        arr[i] = arr[j];
        arr[j] = max;
      }
    }
  }
  for (int i = 0; i < num; i++)
  {
    cout << arr[i] << "  ";
  }
  return 0;
}