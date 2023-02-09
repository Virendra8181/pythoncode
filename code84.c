#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];

  gets(str);

  int num = strlen(str);
  for (int i = num - 1; str[i] != '\0'; i--)

  {
    printf("%c", str[i]);
  }

  return 0;
}