#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    printf("Enter P, R and T:: \n");
    scanf("%f%f%f",&p,&r,&t);
    float si=(p*r*t)/100;
    float ci=p*pow((1+r/100),t);
    printf("\nSimple Interest:: %f\nCompound Interest:: %f",si,(ci-p));
    return 0;
}
