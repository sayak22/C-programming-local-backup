#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter limit:: ");
    int n;
    scanf("%d",&n);
    printf("Enter elements of the array:: ");
    int a[n];
    for(int i=0;i<n; i++)
    scanf("%d",&a[i]);
    for(int i=0; i<n; i++)//performing bubble sort.
    {
        for (int j = 0; j < n-i; j++)
        {
            if (*(a+j) > *(a+j+1))
            {
                int t=*(a+j) ;
                *(a+j) =*(a+j+1);
                *(a+j+1)=t;  
            }
            
        }  
    }
    printf("Sorted array:: ");
    for(int i=0;i<n; i++)
    printf("%d ",a[i]);
    return 0;
}
