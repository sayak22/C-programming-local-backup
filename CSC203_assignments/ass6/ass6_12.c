#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    int n = 0, a = 0, sp = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            n++;
        else if (tolower(s[i]) >= 97 && tolower(s[i]) <= 122)
            a++;
        else
            sp++;
    }
    printf("digits = %d\nalphabets = %d\nspecial characters = %d", n, a, sp);

    return 0;
}
