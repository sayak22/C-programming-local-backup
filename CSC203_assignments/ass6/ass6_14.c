#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    int c[128] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        c[s[i]]++;
    }
    int m = 0;
    char ch;
    for (int i = 1; i <= 127; i++)
    {
        if (c[i] > m)
        {
            m = c[i];
            ch = (char)i;
        }
    }
    if (m > 0)
        printf("The most repeated character is:: %c", ch);
    else
        printf("Empty string");
    return 0;
}
