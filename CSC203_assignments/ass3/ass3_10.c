#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a 5 digit number:: ");
    scanf("%d", &n);
    int p = n, rev = 0;
    while (p != 0)
    {
        rev = rev * 10 + p % 10;
        p /= 10;
    }

    if (n == rev)
        printf("Palindrome");
    
    else
        printf("Not palindrome");
    

    return 0;
}

