#include<stdio.h>

int main()
{
    int n;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n],sum=0;
    printf("Enter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Mean = %.2f",(double)(sum/n));
    
    return 0;
}
