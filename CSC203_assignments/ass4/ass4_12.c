#include<stdio.h>
#include<math.h>

int fact(int n)
{
    int f=1;
    for (int i = 1; i <= n; i++)
        f*=i;
    return f;
}

float serVal(int n)
{
    float s=(float)(pow(n,n)/fact(n));
    return s;
}

int main()
{ 
    int n;
    printf("Enter limit :: ");
    scanf("%d",&n);
    float sum=0;
    for (int i = 1; i <= n; i++)
        sum+=serVal(i);
    printf("%f", sum);
    return 0;
}
