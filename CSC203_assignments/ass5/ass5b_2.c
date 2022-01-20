#include <stdio.h>
#include <stdlib.h>

int main()
{
     srand(time(0));
 for (int i = 0; i < 36000; i++)
 {
     int a= rand() %6 +1;
     int b= rand() %6 +1;
     printf("%d, %d\n", a ,b);
 }  
    return 0;
}
