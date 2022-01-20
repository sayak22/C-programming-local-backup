#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cid[10], cname[34];
    int unit;
    float bill = 0;
    printf("Enter customer ID:: ");
    gets(cid);
    printf("Enter customer name:: ");
    gets(cname);
    printf("Enter units consumed:: ");
    scanf("%d", &unit);

    if (unit <= 199)
        bill = 1.20 * unit;
    else if (unit > 199 && unit <= 400)
        bill = 1.50 * unit;
    else if (unit > 400 && unit <= 600)
        bill = 1.80 * unit;
    else if (unit > 600)
        bill = 2.00 * unit;

    if (bill > 400)
        bill += 0.15 * bill;

    printf("Bill = %f", bill);

    return 0;
}
