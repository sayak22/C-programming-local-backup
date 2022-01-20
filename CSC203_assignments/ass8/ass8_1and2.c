#include <stdio.h>

int main()
{
//1.
FILE* ptr;
ptr = fopen("New.txt","w");
fprintf(ptr, "%s","Name: Sayak Mondal\n");
fprintf(ptr,"%s" , "Roll: 20155\n");
fprintf(ptr,"%s", "College: IIIT Una\n");
fprintf(ptr,"%s","Branch: Computer Science and Engineering"); 
fclose(ptr);

//2.
ptr = fopen("New.txt","r"); 
char ch;
while((ch=fgetc (ptr)) !=EOF)
printf("%c", ch);
fclose(ptr);
return 0;
}
