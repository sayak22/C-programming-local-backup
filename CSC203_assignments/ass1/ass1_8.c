#include<stdio.h>
#define ta 10000

int main(int argc, char const *argv[])
{
    int b;
    printf("Enter basic pay:: ");
    scanf("%d",&b);
    printf("Salary = %f",(b+0.1*b+ta));
    return 0;
}
