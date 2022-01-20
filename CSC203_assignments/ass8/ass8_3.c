#include <stdio.h>

int main()
{
FILE* ptr;
ptr = fopen("NewFile.txt","w");
char ch;
fprintf(ptr, "%s\n%s\n%s\n%s","test line 1", "test line 2","test line 3","test line 4");
fclose(ptr);
ptr = fopen("NewFile.txt","r");

while((ch=fgetc(ptr)) !=EOF)
printf("%c", ch);

return 0;
}
