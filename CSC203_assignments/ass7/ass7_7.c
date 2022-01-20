#include<stdio.h>
#include<conio.h>
#include<string.h>
//declaration of struct
struct data{
  
   int code;
    char name[30];
   int date;
   int month;
   int year;

};
void enter_data(struct data e[100],int n)  //enter details of employees 
{
    int i;
    for(i=0;i<n;i++)
    {   printf("\n");
        printf("enter code of employee: ");
        scanf("%d",&e[i].code);
        printf("enter name of employee: ");
        fflush(stdin);
        gets(e[i].name);
        printf("enter date of joining(dd-mm-yyyy): ");
        scanf("%d-%d-%d",&e[i].date,&e[i].month,&e[i].year);
    }
}
void check_emp(struct data e[100],int n,int d,int m,int y)  //check tenure of employee
{
    int i,d1,d2,d3,j=1;
    for(i=0;i<n;i++)
    {
        d1 = d - e[i].date;
        d2 = m - e[i].month;
        d3 = y - e[i].year;
        if((d3==3 && d1>=0 && d2>=0)||(d3>3))
        {
           printf("%d\n",j++);
           printf("employee code: %d\n",e[i].code);
           printf("employee name: %s\n",e[i].name);
           printf("date of joining: %d-%d-%d\n",e[i].date,e[i].month,e[i].year); 
        }
    }
    if(j==1)
    printf("no employee has tenure more than 3 years");
}


int main()
{
   struct data emp[100];
   int n,d,m,y;
   printf("Enter number of employee data you want to enter: ");
   scanf("%d",&n);
   enter_data(emp,n);
  printf("\nenter current date(dd-mm-yyyy): ");
  scanf("%d-%d-%d",&d,&m,&y);
  check_emp(emp,n,d,m,y);
 return 0;
}
