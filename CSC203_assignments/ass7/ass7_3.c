#include <stdio.h>
struct Students
{
    char name[20], dep[10], course[10];
    int roll, year;
} a[450];
void show(int, int);
void display(int, int);
void main()
{
    int i, n, r;
    for (i = 0; i < 450; i++)
    {
        printf("Enter Details of Student:% d\n", i + 1);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Department: ");
        scanf("%s", a[i].dep);
        printf("Course: ");
        scanf("%s", a[i].course);
        printf("Roll No.: ");
        scanf("%d", &a[i].roll);
        printf("Year of joining: ");
        scanf("%d", &a[i].year);
        printf("\n");
        printf("do you want to continue?(y/n) ");
        getchar();
        if (getchar() == 'n')
        {
            i++;
            break;
        }
    }
    printf("Enter a year: ");
    scanf("%d", &n);
    show(n, i);
    printf("\nEnter roll number of the student: \n");
    scanf("%d", &r);
    display(r, i);
}
void show(int n, int i)
{
    printf("Names of students joined in the year %d\n", n);
    for (int j = 0, c = 1; j < i; j++)
    {
        if (a[j].year == n)
        {
            printf("%d. %s\n", c, a[j].name);
            c++;
        }
    }
}
void display(int n, int i)
{
    printf("Data of the student:-\n");
    for (int j = 0; j < i; j++)
    {
        if (a[j].roll == n)
        {
            printf("Name: %s\n", a[j].name);
            printf("Department: %s\n", a[j].dep);
            printf("Course: %s\n", a[j].course);
            printf("Year of joining: %d", a[j].year);
            break;
        }
    }
}
