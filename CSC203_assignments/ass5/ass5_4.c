#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int num = 0, i = 0;
    for (int i = 0; i < n; i++)
        num = num * 10 + a[i];

    printf("The number consisting the digits = %d", num);

    return 0;
}
