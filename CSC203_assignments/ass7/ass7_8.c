#include<stdio.h>
#include<conio.h>
#include<string.h>
//declaration of union
union id { 
char color[10]; 
int size; 
};
//declaration of structure
struct { 
char manufacturer[20]; 
float cost; 
union id description; 
} shirt, gloves; 
int main()
{
    int n;
    printf("Whose info you want to add (1 for shirt and 0 for gloves):: ");
    scanf("%d",&n);
    //enterring data
     printf("Enter manufacturer name: ");
     fflush(stdin);
     if(n==1)
     gets(shirt.manufacturer);
     else
     gets(gloves.manufacturer);

     printf("Enter cost of product: ");
     if(n==1)
     scanf("%f",&shirt.cost);
     else
     scanf("%f",&gloves.cost);

     printf("Enter size if its shirt or color if its a glove: ");
     if(n==1)
     scanf("%d",&shirt.description.size);
     else
     scanf("%s",&gloves.description.color);
    
    //printing data
    if(n==1)
      {
        printf("\nManufacturer: %s\n",shirt.manufacturer);
        printf("Cost: %.2f\n",shirt.cost);
        printf("Size: %d\n",shirt.description.size);
      }
      else
      {
         printf("\nManufacturer: %s\n",gloves.manufacturer);
        printf("Cost: %.2f\n",gloves.cost);
        printf("Size: %s\n",gloves.description.color);
      }
      return 0;
}

