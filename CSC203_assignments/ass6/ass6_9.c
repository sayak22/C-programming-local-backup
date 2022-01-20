#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    printf("\nReversed string:: ");
    for (int i = strlen(s) - 1; i >= 0; i--)
    printf("%c",s[i]);
        return 0;
}
