#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    printf("Enter m:: ");
    scanf("%d", &m);
    if (m > 0)
        n = 1;

    else if (m == 0)
        n = 0;
    else
        n = -1;
    printf("Value of n :: %d",n);
    return 0;
}
