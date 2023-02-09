#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("main.txt", "w");
    fprintf(fp, "%s", "sample text");

    fclose(fp);
}