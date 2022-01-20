#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter the year:: ");
    int n;
    scanf("%d",&n);
     if (n % 400 == 0) {
      printf("It is a leap year.");
   }
   else if (n % 100 == 0) {
      printf("It is not a leap year.");
   }

   else if (n % 4 == 0) {
      printf("It is a leap year.");
   }
   else {
      printf("It is not a leap year.");
   }
    return 0;
}
