#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: ");
    gets(s);
    int v=0,c=0;    

    for (int i = 0; i < strlen(s); i++)
    {
        tolower(*(s+i));
        if(*(s+i)=='a' || *(s+i)=='e' || *(s+i)=='i' || *(s+i)=='o' || *(s+i)=='u')
         v++;
        else
         c++;
    }

    printf("\nVowels:: %d\nConsonants:: %d",v,c);    
    return 0;
}
