#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Enter number:: ");
    scanf("%d",&n);
    int sum=0,p=n;
    while(p!=0){
        sum=(sum*10)+p%10;
        p/=10;
    }
    printf("The reversed number is %d\n",sum);
    if (sum==n)
        printf("Palindrome.");
    else
        printf("NOT palindrome.");
    return 0;
}
