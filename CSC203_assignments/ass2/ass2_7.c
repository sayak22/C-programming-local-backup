#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter decimal number:: ");
    scanf("%d", &n);
    int b[100];
    int i = 0;
    while (n != 0)
    {
        b[i++] = n % 2;
        n /= 2;
    }
    printf("The binary equivalent of the number is:: ");
    for (int j = i - 1; j >= 0; j--)
       printf("%d",b[j]);

    return 0;
}
