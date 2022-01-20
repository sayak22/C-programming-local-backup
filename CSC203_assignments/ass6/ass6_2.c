#include<stdio.h>

int main()
{
    int a=10;
    int *ptr=&a; // ptr is a integer pointer variable holding the address of a
    printf("adress of a:: %d, %d, %d\n", &a, ptr, &*ptr);
    /*all the values printed in the above statement 
      are the same that is the address of the variable a
      in the third example & and * operators cancel each
      other's effect and print the value of ptr*/
    printf("value of a:: %d, %d, %d", *&a,*ptr,**&ptr);
    /*As soon as we de reference all the previously
    printed values we get the integer value that a is holding.*/
    return 0;
}
