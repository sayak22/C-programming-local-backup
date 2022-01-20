#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter limit:: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d   %d\n",i,i*i);
    }
    
    return 0;
}
