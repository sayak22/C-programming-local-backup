#include <stdio.h>
#include <conio.h>
#include <string.h>
//declaration of struct
struct data
{
  int ano;
  char title[20];
  char auth[20];
  int price;
  int flag; //1 for issued 0 for not issued
};

// function to add book info in the library
int inputData(struct data book[200], int cnt)
{
  int i, n, t;
  printf("Enter number of books whose information is to be entered :: ");
  scanf("%d", &n);
  for (i = cnt; i < (cnt + n); i++)
  {
    printf("\n");
    printf("Enter accession number: ");
    scanf("%d", &book[i].ano);
    printf("Enter title of book: ");
    fflush(stdin);
    gets(book[i].title);
    printf("Enter Author of book: ");
    fflush(stdin);
    gets(book[i].auth);
    printf("Enter price of book: ");
    scanf("%d", &book[i].price);
    printf("Press 1 if the book is issued otherwise press 0 ): ");
    scanf("%d", &book[i].flag);
  }
  t = cnt + n;
  return t;
}

// function to display book info
void bkinfo(struct data book[200], int cnt)
{
  int i;
  for (i = 0; i < cnt; i++)
  {
    printf("accession number: %d\n", book[i].ano);
    printf("title of book: %s\n", book[i].title);
    printf("Author of book: %s\n", book[i].auth);
    printf("price of book: %d\n", book[i].price);
    printf("flag(1 for issued 0 for not issued): %d\n", book[i].flag);
    printf("\n");
  }
}

//function to display book of searched author
void auth(struct data book[200], int cnt)
{
  int i, j = 1;
  char au[20];
  printf("Enter name of author whose book you want: ");
  fflush(stdin);
  gets(au);
  for (i = 0; i < cnt; i++)
  {
    if (strcmp(book[i].auth, au) == 0)
    {
      printf("%d\n", j++);
      printf("accession number: %d\n", book[i].ano);
      printf("title of book: %s\n", book[i].title);
      printf("price of book: %d\n", book[i].price);
      printf("flag(1 for issued 0 for not issued): %d\n", book[i].flag);
      printf("\n");
    }
  }
  if (j == 1)
    printf("Sorry book of given author does not exist in the library\n");
}

//function to display title of specified book
void title(struct data book[200], int cnt)
{
  int a, i, k = 0;
  printf("Enter accession number of books whose title you want to know: ");
  scanf("%d", &a);
  for (i = 0; i < cnt; i++)
  {
    if (a == book[i].ano)
    {
      printf("Title of the book is: %s\n", book[i].title);
      k++;
    }
  }
  if (k == 0)
    printf("Sorry book of given accession number does not exist in the library\n");
}

//function to display books in the order of accession number
void acno(struct data book[200], int cnt)
{
  int i, j;
  struct data p;
  for (i = 0; i < cnt - 1; i++)
  {
    for (j = i + 1; j < cnt; j++)
    {
      if (book[i].ano > book[j].ano)
      {
        p = book[j];
        book[j] = book[i];
        book[i] = p;
      }
    }
  }
  bkinfo(book, cnt);
}
int main()
{
  struct data book[200]; //array to store book info
  int exe = 0, cnt = 0;
  do
  {
    printf("\n\n");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
    printf("Enter which menu number you want to execute: ");
    scanf("%d", &exe);
    if (exe == 1)
      cnt = inputData(book, cnt); //cnt stores count of total books in library
    else if (exe == 2)
      bkinfo(book, cnt);
    else if (exe == 3)
      auth(book, cnt);
    else if (exe == 4)
      title(book, cnt);
    else if (exe == 5)
      printf("Number of books in the library is :- %d\n", cnt);
    else if (exe == 6)
      acno(book, cnt);
  } while (exe != 7);

  printf("Thanks for coming to our library");
  return 0;
}
