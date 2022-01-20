#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[6]={0};
    for (int i = 0; i < 600000; i++)
    {
        int roll = 1 + rand() % 6;
        a[roll-1]++;
    }

    for (int i = 0; i < 6; i++)
        printf(" occurance of %d = %d\n",i+1, a[i]);
        
    return 0;
}
