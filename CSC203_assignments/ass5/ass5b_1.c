#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
            return i;
    }
    return -1;    
}

int main()
{
 printf("Enter the limit of array :: ");
 int n;
 scanf("%d",&n);
 int a[n];
 printf("Enter the array elements :: ");
 for (int i = 0; i < n; i++)
      scanf("%d",&a[i]);
 
 printf("Enter the key element :: ");
 int key;
 scanf("%d",&key);
 int index= linearSearch(a, n, key);
 if (index!=-1) 
    printf("Index of the element is :: %d", index);
 
 else
    printf("No match found!");
    
    return 0;
}
