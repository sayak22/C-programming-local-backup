#include<stdio.h>
#include<math.h>

double roundToInteger (double n) 
{ return floor (n +0.5);}

double roundToTenths (double n) 
{ return floor (n*10+0.5)/10;}

double roundToHundreds (double n) 
{ return floor (n*100+0.5)/100;}

double roundToThousands (double n) 
{ return floor (n*1000+0.5)/1000;}

int main()
{
    double n;
    printf("Enter a number :: ");
    scanf("%lf",&n);
    printf("Number :: %lf\n",n);
    printf("Rounded to Integer :: %lf\n",roundToInteger(n));
    printf("Rounded to Tenths :: %lf\n",roundToTenths(n));
    printf("Rounded to Hundreds :: %lf\n",roundToHundreds(n));
    printf("Rounded to Thousands :: %lf\n",roundToThousands(n));
    return 0;
}
