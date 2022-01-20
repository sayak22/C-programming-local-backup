#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100],t[100];
    printf("Enter a string:: ");
    gets(s);
    printf("Enter the substring:: ");
    gets(t);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==t[0])
        {
            for (int j = 0; j < strlen(t); j++)
            {
                if (s[i+j] != t[j])
                    break;
                else if (s[i+j] == t[j] && j==strlen(t)-1)
                {
                    printf("Substring present in the string");
                    return 0;
                }
            }
            
        }
    }
    printf("Substring is not present in the string");
    
        return 0;
}
