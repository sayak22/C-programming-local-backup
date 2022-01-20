#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x, sum = 0;
    printf("Enter x:: ");
    scanf("%f", &x);
    sum += (x - 1) / x;
    for (int i = 2; i <= 7; i++)
        sum += 0.5 * pow((x - 1) / x, i);
    printf("\nSum = %f", sum);
    return 0;
}
