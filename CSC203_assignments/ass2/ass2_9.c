#include <stdio.h>

int main(int argc, char const *argv[])
{
    int w[20];
    printf("Enter the work hours of 20 workers:: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &w[i]);
        w[i] = (w[i] > 40) ? (w[i] - 40) * 12 : 0;
        printf("Extra payment for worker %d = %d\n", i + 1, w[i]);
    }

    return 0;
}
