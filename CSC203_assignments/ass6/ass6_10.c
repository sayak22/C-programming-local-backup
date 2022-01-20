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
        if (s[i]==' ')
            w++;
    }
    printf("The number of words in the sentence is %d", w+1);
    
        return 0;
}
