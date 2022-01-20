#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=0,b=1,c,n;
    printf("Enter limit:: ");
    scanf("%d",&n);
    printf("The first %d terms of the fibonacci series are:-\n",n);
    for (int i = 0; i < n; i++)
    {
        (i==n-1)?printf("%d. ",a):printf("%d, ",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}
