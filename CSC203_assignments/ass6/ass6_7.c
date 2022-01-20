#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter limit:: ");
    int n;
    scanf("%d", &n);
    printf("Enter elements of the array:: ");
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        sum += *(a + i);
    }
    printf("Sum of array:: %d",sum);
    return 0;
}
