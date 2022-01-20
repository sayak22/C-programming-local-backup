#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit:: ");
    scanf("%d", &n);
    printf("Enter Elements of the array:: ");
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

        printf("HEX        DEC \n");
    for (int i = 0; i < n; i++)
        printf("%p, %d\n", a+i, a+i);

    return 0;
}
