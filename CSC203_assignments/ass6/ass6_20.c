#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    int l =strlen(s);
    for (int i = 0; i < l; i++)
    {
        char c=tolower(s[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            for (int j = i; j < l; j++)
            s[j]=s[j+1];  
        i--;
        l--;
        }          
    }
    printf("The stirng without vowels:: ");
    puts(s);
    
        return 0;
}
