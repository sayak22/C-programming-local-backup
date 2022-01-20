#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter 3 sides of the triangle:: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle \n");

    return 0;
}
