#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit:: ");
    scanf("%d", &n);
    int a[n], flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                flag = 1;
        }
    }
    if (flag == 1)
        printf("Yes. Number repeated!");
    else
        printf("No. Number not repeated!");
    return 0;
}
