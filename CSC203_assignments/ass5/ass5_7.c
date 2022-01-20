#include<stdio.h>

int main()
{
    int n;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n], b[10]={0};
    printf("Enter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        b[a[i]-1]++;
    }
    printf("Summary ::\n");
    for (int  i = 0; i < 10; i++)
        printf("Number of %d rating = %d\n",i+1,b[i]);  
    return 0;
}
