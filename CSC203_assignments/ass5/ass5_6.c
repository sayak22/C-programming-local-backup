#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit :: ");
    scanf("%d", &n);
    int a[n], sum = 0;
    printf("Enter the numbers one by one:: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    double median = 0, mode = 0;
    if (n % 2 == 0)
        median = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    else
        median = a[((n + 1) / 2) - 1];
    double mean = (double)(sum / n);
    mode = 3 * median - 2 * mean;
    printf("Mean = %lf\nMedian = %lf\nMode = %lf", mean, median, mode);
    return 0;
}
