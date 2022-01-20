#include <stdio.h>
#include <conio.h>
#include <string.h>

//declaration of structure
struct data
{
    char name[30];
    int roll;
};

struct data enter_data(struct data v) //function that take structure argument
{
    printf("enter name :: ");
    fflush(stdin);
    gets(v.name);
    printf("enter roll no :: ");
    scanf("%d", &v.roll);
    return (v); //return structure datatype
}
int main()
{
    struct data v1;
    v1 = enter_data(v1); //function call
    printf("\n\n");
    printf("entered name is :: %s\n", v1.name);
    printf("entered roll no. is :: %d\n", v1.roll);
    return 0;
}
