#include <stdio.h>
#include <ctype.h>
void main()
{
    FILE* ptr;
    ptr = fopen("Input.txt","r");
    int ch,lc=0,uc=0,d=0,sp=0;
    while((ch=fgetc(ptr))!=EOF)
    {
        if(isdigit(ch))
        d++;
        else if(isalpha(ch))
        {
            if(isupper(ch))
            uc++;
            else
            lc++;
        }
        else if(ispunct(ch))
        sp++;
    }
    printf("Number of digits = %d\n", d);
    printf("Number of Lower Case letters = %d\n", lc);
    printf("Number of Upper Case letters = %d\n", uc);
    printf("Number of Special characters = %d\n", sp);
    return 0;
}
