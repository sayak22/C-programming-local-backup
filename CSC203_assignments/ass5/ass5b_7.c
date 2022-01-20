#include <stdio.h>

int main()
{
    printf("Enter the number of rows and collumns of the square matrix :: ");
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (j > i)
                a[i][j] = 1;
            if (j == i)
                a[i][j] = 0;
            if (j < i)
                a[i][j] = -1;
        }
    printf("The requested array is::\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    return 0;
}
