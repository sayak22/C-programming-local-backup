#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("TRIAL.txt", "r");
    char ch; int c = 0, no_w = 0, w4 = 0;
    while ((ch = fgetc(ptr)) != EOF)
    {
        c++;
        if (ch == 32)
        {
            no_w++;
            if (c == 5)
                w4++;
            c = 0;
        }
    }
    printf("Number of words: %d\n", no_w);
    printf("Total number of four letter words: %d", w4);
    return 0;
}
