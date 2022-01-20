#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = rand() % 1000 + 1;
    int g;

    while (1)
    {
        printf("Enter your guess (between 1 to 1000):: ");
        scanf("%d", &g);
        if (n == g)
        {
            printf("\nCorrect answer! You win!");
            return 0;
        }
        else if (g < n)
            printf("Oops! fell short..TRY HIGHER...\n");
        else
            printf("Oops! too much... TRY LOWER..\n");
    }

    return 0;
}
