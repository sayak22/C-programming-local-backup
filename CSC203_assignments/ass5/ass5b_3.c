#include <stdio.h>

int main()
{
    double grades[5][20];
    //part h.
    printf("Enter the array elements :: ");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 20; j++)
            scanf("%lf", &grades[i][j]);

    return 0;

    for (int i = 0; i < 20; i++) //part a.
    {
        printf("Student %d marks :: ",i+1);
        for (int j = 0; j < 5; j++)
            printf("%lf ",grades[i][j]);
            printf("\n");
    }
    
    /*part b - The array has 5 rows.
    part c - The array has 20 collumns.
    part d - The array has 20*5 = 100 elements.
    part e - grades[0][0], grades[1][0], grades[2][0],grades[3][0], grades[4][0]
    part f - grades[2][1]*/

    //part g.
    grades[0][1]=100;
     for (int i = 0; i < 20; i++) //part i.
    {
        for (int j = 0; j < 5; j++)
            grades[i][j]=0;
    }
    
    //part j.
    double mathGrade[20]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2};
    for (int i = 0; i < 20; i++)
        grades[0][i]=mathGrade[i];
    
    //part k.
    int max=grades[0][0];
    for (int i = 0; i < 20; i++)
    {
        if (grades[0][i]>max)
            max=grades[0][i];
    }
    printf("\nminimum of all the grades :: %lf",max);

    //part l.
        printf("\nStudent 2 all marks :: ");
        for (int j = 0; j < 5; j++)
            printf("%lf, ",grades[j][1]);
    
    //part m.
    int avg=0;;
    for (int i = 0; i < 20; i++)
            avg+=grades[0][i];
    printf("\nAverage of all the grades :: %lf",avg/20.0);

    //part n.
    printf("  ");
    for(int i=0; i<20; i++)
    printf("i ");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
            printf("%d ",i);
        for (int j = 0; j < 20; j++)
            printf("%lf ");
            printf("\n");   
    }
    return 0;
}
