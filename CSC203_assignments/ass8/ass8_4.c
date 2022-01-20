#include <string.h>
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("INPUT.txt", "r");
    int i = 0, j = 0;
    char ch;
    char str[100], st[100];
    while ((ch = fgetc(ptr)) != EOF)
    {
        str[i] = ch;
        if (ch == 32)
        {
            for (int l = i; l >= 0; l--)
            {
                st[j] = str[l];
                j++;
            }
            strcat(st, " ");
            strcpy(str, "");
            i = 0;
        }
        i++;
    }

    printf("Input: ");
    ptr = fopen("INPUT.txt", "r");
    while ((ch = fgetc(ptr)) != EOF)
        printf("%c", ch);
    printf("\n");
    printf("Output: ");
    for (i = 0; i < j; i++)
        printf("%c", st[i]);
    return 0;
}
