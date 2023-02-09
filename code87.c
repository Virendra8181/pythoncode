#include <stdio.h>
int main()
{
    FILE *fp = fopen("main.txt", "r");

    int ch = gets(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = getc(fp);
    }
    if (feof(fp))
        printf("\n reached end of file ");
    else
        printf("\n something is wrong .");
    fclose(fp);
    getchar();

    return 0;
}