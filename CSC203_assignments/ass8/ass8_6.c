#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    FILE *ptr3;
    ptr1 = fopen("Input1.txt", "r");
    ptr2 = fopen("Input2.txt", "r");
    ptr3 = fopen("Output.txt", "w");
    char ch;
    while ((ch = getc(ptr1)) != EOF)
        fputc(ch, ptr3);
    fputs("\n", ptr3);
    while ((ch = getc(ptr2)) != EOF)
        fputc(ch, ptr3);

    fclose(ptr3);
    ptr3 = fopen("Output.txt", "r");
    printf("After merging two files, result: \n");
    while ((ch = getc(ptr3)) != EOF)
        printf("%c", ch);

    return 0;
}
