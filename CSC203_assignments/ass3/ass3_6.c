#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    printf("Enter temperature in degree centigrade:: ");
    scanf("%d", &t);
    if (t < 0)
        printf("Freezing weather\n");
    else if (t > 0 && t <= 10)
        printf("Very cold weather\n");
    else if (t > 10 && t <= 20)
        printf("Cold weather\n");
    else if (t > 20 && t <= 30)
        printf("Normal in temperature\n");
    else if (t > 30 && t <= 40)
        printf("It's hot\n");
    else if (t > 40)
        printf("It's very hot\n");
    return 0;
}
