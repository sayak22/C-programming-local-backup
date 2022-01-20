#include<stdio.h>
int change(int *a,int *b,int *c)
{
    int t;
    t=*c;
    *c=*b; *b=*a; *a=t; 
}

int main()
{
    int a,b,c;
    printf("Enter the 3 numbers:: ");
    scanf("%d%d%d",&a,&b,&c);
    change(&a,&b,&c);
    printf("The numbers after the operation:: %d, %d, %d",a,b,c);    
    return 0;
}
