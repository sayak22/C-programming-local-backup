#include <stdio.h>

struct Dates
{
    int date, month, year;
};

void main()
{
    int i;
    struct Dates d1;
    struct Dates d2;
    printf("Enter 1st Date, in format DD/MM/YY: ");
    scanf("%d/%d/%d", &d1.date, &d1.month, &d1.year);
    printf("Enter 2nd Date, in format DD/MM/YY: ");
    scanf("%d/%d/%d", &d2.date, &d2.month, &d2.year);
    if (d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
        printf("Equal");
    else
        printf("Unequal");
}
