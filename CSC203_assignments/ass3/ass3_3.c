#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter salary, mutual fund, home loan and donation:: ");
    int salary;
    float tax = 0, mf, hl, don, s;
    scanf("%d%f%f%f", &salary, &mf, &hl, &don);
    if (mf + hl + don <= 150000)
        s = salary - (mf + hl + don);
    else
        s = salary - 150000;

    if (s <= 250000)
        tax = 0;
    else if (s > 250000 && s <= 500000)
        tax = 0.05 * s;
    else if (s > 500000 && s <= 750000)
        tax = 0.1 * s;
    else if (s > 750000 && s <= 1000000)
        tax = 0.15 * s;
    else if (s > 1000000 && s <= 1250000)
        tax = 0.2 * s;
    else if (s > 1250000 && s <= 1500000)
        tax = 0.25 * s;
    else if (s > 1500000)
        tax = 0.3 * s;
    printf("Tax = %f", tax);
    return 0;
}
