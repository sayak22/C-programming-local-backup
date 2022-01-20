#include <stdio.h>
#include<string.h>
#include<conio.h>

int main() {
    char *s1, *s2;
    fflush(stdin);
    printf("enter string 1: \n");

    scanf("%s", s1);
    printf("enter string 2: \n");
    scanf("%s", s2);
    
    if (strcmp(s1, s2)>0){
        puts("string are larger");
    }

	return 0;
}