#include <stdio.h>
int main(void)
{
    FILE *fp = NULL;
    fp = fopen("main.txt", "w+");
    fgets("%s", "virendra");

    fputs("%s", fp);
}