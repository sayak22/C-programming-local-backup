#include <stdio.h>
#include <ctype.h>
#include <string.h>

int join(){
    FILE *ptr;
    ptr = fopen("employee.txt", "a");
    char empno[32], gross[9]; char sex[2]; char n[32];
    printf("\nEnter Employee number :: ");
    fflush(stdin);gets(empno);
    printf("\nEnter Employee name :: ");
    gets(n);
    printf("\nEnter Employee sex :: ");
    gets(sex);
    printf("\nEnter Gross salary :: ");
    gets(gross);
    fputs(empno,ptr);fputc(32,ptr);
    fputs(n,ptr);fputc(32,ptr);
    fputs(sex,ptr);fputc(32,ptr);
    fputs(gross,ptr); fprintf(ptr,"\n");
    printf("\nFILE UPDATED!\n");
    fclose(ptr);
    return 0;
}

int main()
{
    while (1)
    {
        printf("\n\n MENU:\n1 - JOIN\n2 - LEAVE\n3 - SALARY CHANGE\n");
        printf("\nPress any other key to exit\nENTER YOUR CHOICE :: ");
        char c;
        scanf("%c", &c);

        switch (c)
        {
        case '1':
            join();
            break;
        case '2':
            // leave();
            break;
        case '3':
            // change();
            break;
        default:
            return 0;
        }
    }
}
