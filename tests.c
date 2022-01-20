#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void insert(int item)
{
    struct node *ptr, *parentptr, *nodeptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("can't insert");
    }
    else
    {
        ptr->data = item;
        ptr->left = NULL;
        ptr->right = NULL;
        if (root == NULL)
        {
            root = ptr;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            parentptr = NULL;
            nodeptr = root;
            while (nodeptr != NULL)
            {
                parentptr = nodeptr;
                if (item < nodeptr->data)
                {
                    nodeptr = nodeptr->left;
                }
                else
                {
                    nodeptr = nodeptr->right;
                }
            }
            if (item < parentptr->data)
            {
                parentptr->left = ptr;
            }
            else
            {
                parentptr->right = ptr;
            }
        }
        printf("Node Inserted");
    }
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    // struct node *p = createNode(8);
    // struct node *p1 = createNode(2);
    // struct node *p2 = createNode(5);
    // struct node *p3 = createNode(9);
    // struct node *p4 = createNode(6);

    // p->left = p1;
    // p->right = p2;
    // p1->left = p3;
    // p1->right = p4;

    do
    {
        printf("\nDo you want to insert more?(y,n)");
        char ch;
         while ((getchar()) != '\n');
        scanf("%c", &ch);
        if (ch == 'n' || ch == 'N')
            break;
        printf("\nEnter data of node ");
        int data;
        scanf("%d", &data);
        insert(data);
    } while (1);

    printf("\nPreorder is: ");
    preOrder(root);
    printf("\nInorder is : ");
    inOrder(root);
    printf("\nPostorder is: ");
    postOrder(root);
    printf("\n");

    return 0;
}