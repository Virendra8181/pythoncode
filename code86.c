/*#include <stdio.h>
#include <string.h>

void fun(char str[])
{

    int num, i = 0;
    int l = (strlen(str) - 1);
    int h = 0;
    while (l > h)
    {
        if (str[h++] != str[l--])
        {
            printf("not pandroilum no", str[l++]);
            return;
        }
    }

    printf("pardlioum no");
}
int main()
{

    fun("virendra");
    fun("gfg");

    return 0;
}
#include <stdio.h>
#include <string.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}

// Driver program to test above function
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, stratIndex, endIndex;

    printf("\n Please Enter any String :  ");
    gets(str);

    len = strlen(str);
    endIndex = len - 1;

    for (i = 0; i <= endIndex; i++)
    {
        if (str[i] != str[endIndex])
        {
            break; 
        }
        endIndex--;
    }
    if (i >= endIndex)
    {
        printf("\n %s is a Palindrome String", str);
    }
    else
    {
        printf("\n %s is Not a Palindrome String", str);
    }

    return 0;
}
