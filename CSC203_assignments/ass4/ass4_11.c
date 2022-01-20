#include<stdio.h>
#include"fact.h"

int main()
{
    printf("Enter a number ::");
    int n;
    scanf("%d",&n);
    printf("Factorial :: %d",fact(n));
    return 0;
}
