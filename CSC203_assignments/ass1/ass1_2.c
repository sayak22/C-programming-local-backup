#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter 2 numbers:: \n");
    scanf("%f%f",&a,&b);
    printf("%f\n",(a+b));
    printf("%f\n",(a+b)-b);
    printf("%f\n",(a*((a+b)/a)));
    return 0;
}
