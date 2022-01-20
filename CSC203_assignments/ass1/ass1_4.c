#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=3, b=5;
    printf("ARITHMETIC OPERATORS :-\n");
    printf("sum = %d\n", a+b);
    printf("substraction = %d\n", a-b);
    printf("multiplication = %d\n", a*b);
    printf("quotient  = %d\n", a/b);
    printf("remainder  = %d\n\n", a%b);
    printf("ASSIGNMENT OPERATORS :-\n");
    int c=b;
    printf("After doing the operation c=b c = %d\n\n",c);
    printf("RELATIONAL OPERATORS :-");
    printf("returns 0 if true else returns 1\n");
    printf("1st number>= 2nd number = %d\n", a>=b);
    printf("1st number<= 2nd number = %d\n", a<=b);
    printf("1st number== 2nd number = %d\n", a==b);
    printf("1st number!= 2nd number = %d\n\n", a!=b);
    printf("LOGICAL OPERATORS :-\n");
    printf("a>b&&b>a = %d\n", a>b&&b>a);
    printf("a>b||b>a = %d\n", a>b||b>a);
    printf("!(a>b||b>a) = %d\n\n", !(a>b||b>a));
    printf("BITWISE OPERATOR :-\n");
    printf("a&b = %d\n",a&b);
    printf("a|b = %d\n",a|b);
    printf("a^b = %d\n",a^b);
    printf("!b = %d\n",!b);
    printf("a>>2 = %d\n",a>>2);
    printf("b<<2 = %d\n",b<<2);
    return 0;
}
