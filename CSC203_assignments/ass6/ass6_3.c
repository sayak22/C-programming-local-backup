#include <stdio.h>

int swap(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:: ");
    scanf("%d%d%d", &a, &b, &c);
    swap(&a, &b, &c);
    printf("The 3 numbers after operations:: %d, %d, %d", a, b, c);
    return 0;
}
