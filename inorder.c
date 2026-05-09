#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void main()
{
    struct node n1, n2, n3;

    clrscr();

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.left = &n2;
    n1.right = &n3;

    n2.left = NULL;
    n2.right = NULL;

    n3.left = NULL;
    n3.right = NULL;

    printf("Inorder: ");
    inorder(&n1);

    printf("\nPreorder: ");
    preorder(&n1);

    printf("\nPostorder: ");
    postorder(&n1);

    getch();
}
