#include <stdio.h>

int main()
{
FILE* ptr1;
ptr1 = fopen("Input1.txt","r"); 
fseek(ptr1,0L, SEEK_END);
int size = ftell(ptr1);
printf("Size = %d bytes", size); 
return 0;
}
