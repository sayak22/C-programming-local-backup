#include<stdio.h>

int main()
{
    int n;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n],b, ans[n], m=-1;

    printf("Enter the number to divide:: ");
    scanf("%d",&b);
    printf("\nEnter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%b==0)
        ans[++m]=a[i];
    }
    printf("\nElements dividing by %d:: ",b);

    for (int i = 0; i <= m; i++)
        printf("%d ",ans[i]);
    
    return 0;
}
