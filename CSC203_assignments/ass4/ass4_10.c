#include<stdio.h>

int pattern()
{
    for (int i = 0; i < 5; i++)
    {
        if (i==0 || i==4)
        for (int j = 0; j < 8; j++)
            printf("*");
        
        else
        for (int j = 0; j < 8; j++)
            if (j==0 || j==7)
                printf("!");
            else
            printf(" ");

            printf("\n"); 
    }
}

int main()
{
       pattern();
    return 0;
}
