#include<stdio.h>
#include<math.h>

int isprime(int n){
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
            return 0;
        return 1;   
    }
    
}

int main(int argc, char const *argv[])
{
    int a=1;
    for (int i = 2; i < 301; i++)
    {
        if (isprime(i))
        {
            printf("%d ,",i);
            if(a++%25 == 0)
            printf("\n");
        }   
    }
    return 0;
}
