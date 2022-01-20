#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number:: ");
    scanf("%d",&n);
    int sum=0,p=n;
    while(p!=0)
    {
        sum+=(p%10)*(p%10)*(p%10); //as pow(p%10,3) was giving wrong answer.
        p/=10;
    }
    if (sum==n)
    {
        printf("Armstrong number.");
    }
    else
    {
        printf("NOT an Armstrong number.");
    }
    
    
    return 0;
}
