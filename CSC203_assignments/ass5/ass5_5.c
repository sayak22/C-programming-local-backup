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
    int g = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > g)
            g = a[i];
    }
    int p = (a[0] != g) ? a[0] : a[1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > p && a[i] != g)

            p = a[i];
    }
    printf("Second largest number:: %d", p);

    return 0;
}
