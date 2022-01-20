#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter 2 numbers:: ");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("Swaped numbers are :: %d, %d",a,b);
    return 0;
}
