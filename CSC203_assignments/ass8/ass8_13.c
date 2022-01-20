#include <stdio.h>
#include <ctype.h>
#include <string.h>

int add(){
    FILE *ptr;
    ptr = fopen("student.txt", "a");
    char marks[10]; char n[32];
    printf("\nEnter Student name :: ");
    fflush(stdin);
    gets(n);
    printf("\nEnter Student marks ::");
    gets(marks);
    fprintf(ptr,"\n"); fprintf(ptr,"Name: ");
    fputs(n,ptr);fprintf(ptr,"\n");
    fprintf(ptr,"Marks=");
    fputs(marks,ptr);fprintf(ptr,"\n");
    printf("\nFILE UPDATED!\n");
    fclose(ptr);
    return 0;
}

int main()
{
    while (1)
    {
        printf("\n\n MENU:\n1 - ADD\n2 - READ\n3 - DELETE\n");
        printf("\nPress any other key to exit\nENTER YOUR CHOICE :: ");
        char c;
        scanf("%c", &c);

        switch (c)
        {
        case '1':
            add();
            break;
        case '2':
            // read();
            break;
        case '3':
            // delete();
            break;
        default:
            return 0;
        }
    }
}
