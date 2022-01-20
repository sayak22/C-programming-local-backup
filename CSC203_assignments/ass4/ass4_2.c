#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int time(int h, int m, int s)
{
 s+=(60*m)+(3600*h);
 if (s<=(12*3600))
         return s;
 while (s>(12*3600))
     s-=(12*3600);
 return s; 
}

int format(int s)
{
    int h, m,stot=s;
    h=s/3600; s%=3600;
    m=s/60; s%=60;
    printf("%d::%d::%d (%d seconds)\n",h,m,s,stot);
}

int main()
{
    printf("Enter time in HH MM SS format :: ");
    int h,m,s,h1,m1,s1,h2,m2,s2;
    scanf("%d%d%d",&h,&m,&s);
    format(time(h,m,s));

    printf("Enter 1st time in HH MM SS format :: ");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Enter 2nd time in HH MM SS format :: ");
    scanf("%d%d%d",&h2,&m2,&s2);
    int diff=abs(time(h1,m1,s1)-time(h2,m2,s2));
    format(diff);    
    return 0;
}
