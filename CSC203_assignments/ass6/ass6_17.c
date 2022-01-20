#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    int w=0;
    for (int i = 0; i < strlen(s); i++)
    {
        s[i]=toupper(s[i]);
    }
    printf("The string in upper case :: ");
    puts(s);
}
