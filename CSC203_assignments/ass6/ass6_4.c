#include<stdio.h>

int factorial(int *n)
{
    int f=1;
    for (int i = 1; i <= *n; i++)
        f*=i;
        return f;
}

int main()
{
    int n;
    printf("Enter a number:: ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(&n));
    return 0;
}
