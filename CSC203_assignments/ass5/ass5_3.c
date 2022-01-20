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

    printf("Array in reverse order:: ");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}
