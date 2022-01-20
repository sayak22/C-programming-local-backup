#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     char s[100],t[100];
    printf("Enter a string:: ");
    gets(s);
    for (int i = 0; i <= strlen(s); i++)
        t[i]=s[i];
    printf("Copied string is ");
    puts(t);
    
        return 0;
}
