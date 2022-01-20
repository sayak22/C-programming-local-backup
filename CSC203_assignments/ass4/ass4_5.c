#include <stdio.h>
#include <stdlib.h>

int flip()
{
    return rand() % 2;
}

int main()
{
    int h = 0, t = 0;
    for (int i = 0; i < 100; i++)
    {
        if (flip())
            h++;
        else
            t++;
    }
    printf("Heads:: %d\nTails:: %d", h, t);

    return 0;
}
