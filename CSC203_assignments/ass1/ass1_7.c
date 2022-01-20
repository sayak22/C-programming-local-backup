#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[100]; int start=0;
    printf("Enter address:: ");
    gets(a);
    a[strlen(a)]=' ';
    a[strlen(a)+1]='\0';

    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i] == ' ')
        {
            for (int j = start; j < i; j++)
            {
                printf("%c",a[j]);
            }
            start=i+1;
            printf("\n");
        }
        
    }
    
    return 0;
}
