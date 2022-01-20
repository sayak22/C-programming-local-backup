#include <stdio.h>

float yen(int d)
{
    return d * 118.87 ;
}

float euro(int d)
{
    return d * 0.92;
}

void main()
{
    int d;
    printf("Enter amount in US dollars :: ");
    scanf("%d", &d);
    printf("USD :: %d\nYen :: %f\nEuro :: %f", d, yen(d), euro(d));
}
