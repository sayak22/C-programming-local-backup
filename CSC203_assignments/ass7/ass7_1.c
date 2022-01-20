#include <stdio.h>
#include <conio.h>
#include <string.h>

/**declaration of structure */
struct data
{
    int acc;
    char name[30];
    float bal;
};

/** function to print details of customer having less than 100 rupees balance */
struct data print(struct data cus[200], int n)
{
    int j = 1;
    printf("details of customer having balance below 100::\n");

    for (int i = 0; i < n; i++)
    {
        if (cus[i].bal - 100 < 0.05)
        {
            printf("%d\n", j++);
            printf("account number of customer: %d\n", cus[i].acc);
            printf("name of customer: %s\n", cus[i].name);
            printf("balance of customer: %8.2f\n", cus[i].bal);
            printf("\n\n");
        }
    }
    if (j==1)
        printf("none");
    
};

/** Function to withdraw money*/
struct data withd(struct data cus[200], int acc, float amnt, int n)
{
    int i, j = 1;
    for (i = 0; i < n; i++)
    {
        if (cus[i].acc - acc) //check account number of person
        {
            if (cus[i].bal - amnt < 0.0f)
                printf("you have insufficient balance for this withdrawal");
            else
            {
                cus[i].bal == amnt;
                printf("transaction is successful\nbalance remain is: %9.5f", cus[i].bal);
            }
            j = 0;
        }
    }
    if (j == 1)
        printf("sorry this customer does not exist in our bank");
}

/** Function to deposit money*/

struct data dep(struct data cus[200], int acc, float amnt, int n)
{
    int i, j = 1;
    for (i = 0; i < n; i++)
    {
        if (cus[i].acc == acc) //check account number of person
        {
            cus[i].bal += amnt;
            printf("transaction is successful\nbalance remain is: %9.5f", cus[i].bal);
            j = 0;
        }
    }
    if (j == 1)
        printf("sorry this customer does not exist in our bank");
}

int main()
{
    struct data cus[200]; int n, i;
    printf("enter the number of customer you want to make entry: "); //take number of customer
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    { /**take details of each customer */
        printf("enter account number: ");
        scanf("%d", &cus[i].acc);
        printf("enter account balance: ");
        scanf("%f", &cus[i].bal);
        printf("enter name of customer: ");
        fflush(stdin);
        gets(cus[i].name);
        printf("\n\n");
    }
    print(cus, n); //calling function to print customer below 100 rupee (1)
    int acc, code; float amnt; char z; /* 2-> transaction by customer */
    printf("\n\nDo you want to withdraw or deposit (y/n): ");
    fflush(stdin);
    scanf("%c", &z);
    if (z == 'y')
    {
        printf("enter account number: ");
        scanf("%d", &acc);
        printf("enter amount: ");
        scanf("%f", &amnt);
        printf("enter 1 for deposit 0 to withdraw: ");
        scanf("%d", &code);
        if (code == 0) //checks entered code
            withd(cus, acc, amnt, n);
        else if (code == 1) //checks entered code
            dep(cus, acc, amnt, n);
        else
        printf("wrong code entered by you");
    }
    return 0;
}
