#include <stdio.h>
#include <math.h>


float dist(int x, int y, int a, int b)
{
    return sqrt(pow(x - a, 2) + pow(y - b, 2));
}

float ar(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a=0, b=0, c=0, s=0, area;
    a=dist(x1,y1,x2,y2);
    b=dist(x2,y2,x3,y3);
    c=dist(x1,y1,x3,y3);
     s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
    float tot = ar(x1, y1, x2, y2, x3, y3);
    float a = ar(x1, y1, x2, y2, x, y);
    float b = ar(x, y, x2, y2, x3, y3);
    float c = ar(x1, y1, x, y, x3, y3);

    if ((tot - (a + b + c)) <= 0.01f && (tot - (a + b + c)) >= -0.01f)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y, x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of 3 vertices of the triangle and the point :: ");
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x, &y);
    printf("sides = %f,%f,%f\n", dist(x1, y1, x2, y2), dist(x3, y3, x2, y2), dist(x1, y1, x3, y3));
    printf("Area = %lf\n", ar(x3, y3, x1, y1, x2, y2));

    int f=isInside(x1, y1, x2, y2, x3, y3, x, y);
    
    if (f==1)
        printf("Present!");
    else
        printf("Not present!");
    return 0;
}
