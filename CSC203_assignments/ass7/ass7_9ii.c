#include<stdio.h>
#include<conio.h>
#include<string.h>

union data  //declaration of union
{
char name[30];
int roll;
}; 

union data enter_data(union data v1) //function that take union argument
{
printf("enter name :: ");
fflush(stdin);
gets(v1.name); 
printf("enter roll no :: ");
scanf("%d",&v1.roll);
return (v1); //return union datatype
} 

int main()
{
union data v1;
v1 = enter_data(v1); //call to function 
printf("\n\n");
printf("entered name is :: %s\n",v1.name);
printf("entered roll no. is :: %d\n", v1.roll);
return 0;
}
