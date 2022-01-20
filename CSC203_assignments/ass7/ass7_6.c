#include <stdio.h>
#include <conio.h>
#include <string.h>
//declaration of struct
struct data
{
  char name[30];
  int price;
  int quantity;
};

//function to enter data
void enter_data(struct data exp[50], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("\n");
    printf("enter name of item: ");
    fflush(stdin);
    gets(exp[i].name);
    printf("enter price per item: ");
    scanf("%d", &exp[i].price);
    printf("enter quantity of item: ");
    scanf("%d", &exp[i].quantity);
  }
}

//function to calculate expenses
float total_exp(struct data exp[50], int n)
{
  int i;
  float t = 0;
  for (i = 0; i < n; i++)
  {
    t += (exp[i].price) * (exp[i].quantity);
  }
  return t;
}
int main()
{
  struct data exp[50];
  int n, m;
  float total;
  printf("enter number of friends in the party: "); //no. of party member
  scanf("%d", &m);
  printf("enter total no. of items: "); //items ordered in the party
  scanf("%d", &n);
  if (n > 50)
    printf("sorry more than allowed items"); //checks the limit of 50 items
  else
  {
    enter_data(exp, n);
    total = total_exp(exp, n);
    printf("total expense is : %.2f\n", total);      //print total expense
    printf("Per head expense is : %.2f", total / m); //print per head expense
  }
  return 0;
}
