#include<stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    printf("Enter 2 numbers:: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("1 - add\n2 - substract\n3 - multiply\n4 - quotient\nEnter your choice:: ");
    scanf("%d",&c);
    switch(c){
        case 1: printf("%d",a+b); break;
        case 2: printf("%d",a-b); break; 
        case 3: printf("%d",a*b); break;
        case 4: printf("%d",a/b); break;
        default: printf("invalid input!");
  }
    return 0;
}
