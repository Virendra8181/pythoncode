#include <stdio.h>
#include <string.h>
int main()
/*{
    char str[100];
    gets(str);
    puts(strupr(str));
    return 0;
}*/
{
    char str[30];
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123)
            str[i] -= 32;
        i++;
    }
    printf("upper case string is %s ", str);
    return 0;
}
