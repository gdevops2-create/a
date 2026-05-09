#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node* create(int value)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node* insert(struct node *root, int value)
{
    if(root == NULL)
    {
        return create(value);
    }

    if(value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(struct node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void search(struct node *root, int value)
{
    if(root == NULL)
    {
        printf("Value Not Found");
        return;
    }

    if(root->data == value)
    {
        printf("Value Found");
    }
    else if(value < root->data)
    {
        search(root->left, value);
    }
    else
    {
        search(root->right, value);
    }
}

void main()
{
    int ch, value;

    clrscr();

    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        if(ch == 1)
        {
            printf("Enter Value: ");
            scanf("%d",&value);

            root = insert(root, value);
        }
        else if(ch == 2)
        {
            printf("BST Elements: ");
            inorder(root);
        }
        else if(ch == 3)
        {
            printf("Enter Value to Search: ");
            scanf("%d",&value);

            search(root, value);
        }
        else
        {
            break;
        }
    }

    getch();
}
