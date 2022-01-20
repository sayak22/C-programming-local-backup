#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hin;
    float hcm;
    printf("Enter height in inches:: ");
    scanf("%d", &hin);
    hcm = 2.54 * hin;
    printf("Height in cms = %f\n", hcm);
    if (hin > 86)
        printf("Tall\n");
    else if (hin <= 86 && hin > 60)
        printf("Average\n");
    else if (hin < 60)
        printf("Dwarf\n");

    return 0;
}
