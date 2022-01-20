#include <stdio.h>
#include <conio.h>
#include <string.h>
//declaration of union
union floatingpoint
{
  float f;
  double d;
  long double x;
} data;

int main()
{
  printf("enter float value: ");
  scanf("%f", &data.f);
  printf("float value is: %f\n\n", data.f);

  printf("enter double value: ");
  scanf("%lf", &data.d);
  printf("double value is: %lf\n\n", data.d);

  printf("enter long double value: ");
  scanf("%Lf", &data.x);

  printf("\nNow i print all values together\n\n");
  printf("float value is: %f\n", data.f);
  printf("double value is: %lf\n", data.d);
  printf("long double value is: %Lf\n", data.x);
  return 0;
}
