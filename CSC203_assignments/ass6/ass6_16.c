#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[100];
    printf("Enter a string:: "); 
    gets(s);
    //first we have taken the string as input.
    int l= strlen(s); 
    /*strlen function returns the number of characters
    in the input string, or in short the length of the string*/
    printf("\nLength of the string is %d",l);
    char t[100];
    //we are declaring another string, t to copy s into t
    strcpy(t,s);// copying s into t
    printf("\nThe copied string is ");
    puts(t);
    // to concatenate 2 strings we use strcat
    printf("The concatenated strings are :: ");
    puts(strcat(s,t)); // printing the concatenated string
    /* strcmp returns 1 if 2 strings are same else -1 is returned*/
    printf("Output of strcmp for s and t :: %d",strcmp(s,t));
    printf("Output of strcmp for s and some random string :: %d",strcmp(s,"CSC203"));
    
        return 0;
}
