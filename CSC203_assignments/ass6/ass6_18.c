#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    printf("Enter position and number of characters:: ");
    int n, p;
    scanf("%d%d", &p, &n);
    printf("Your requested string is:: ");
    for (int i = 0; i < strlen(s); i++)
        if (p - 1 == i)
            if (n == 0)
            {
                for (int j = i; j < strlen(s); j++)
                    printf("%c", s[j]);
                return 0;
            }
            else
            {
                while (n--)
                    printf("%c", s[i++]);
                return 0;
            }
    return 0;
}
