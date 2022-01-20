#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, j = 0;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n], p[n], m = -1;
    printf("Enter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (!isPrime(a[i]))
            p[++m] = a[i];
    }
    printf("The non-prime numbers are:: ");

    for (int i = 0; i <= m; i++)
        printf("%d ", p[i]);
    return 0;
}
