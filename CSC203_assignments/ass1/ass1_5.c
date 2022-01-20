#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter 3 sides of a triangle:: \n");
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of the triangle:: %f",area);
    return 0;
}
