#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100],t[100];
    printf("Enter a string:: ");
    gets(s);
    printf("Enter another string:: ");
    gets(t);

    if(strlen(s) != strlen(t))
    {
        printf("Strings don't match");
        return 0;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==t[i])
            continue;
            else
            {
                printf("The strings don't match");
                return 0;
            }
    }
    printf("The strings are a match");
    
        return 0;
}
