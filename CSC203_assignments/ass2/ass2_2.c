#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter number:: ");
    int n;
    scanf("%d",&n);
    printf("Multiplication table of the number %d:: \n",n);
    for (int i = 1; i < 11; i++)
    {
      printf("%d * %d = %d\n",n,i,(n*i));  
    }
    
    return 0;
}
