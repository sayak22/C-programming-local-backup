#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:: ");
    scanf("%d",&n);
    int f=1;
    for (int i = 1; i <=n; i++)
        f*=i;
    printf("Factorial of the number = %d",f);
  
    return 0;
}
