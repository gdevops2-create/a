#include<stdio.h>
#include<conio.h>

int stack[5];
int top = -1;

void push()
{
    int value;

    if(top == 4)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter Value: ");
        scanf("%d",&value);

        top++;
        stack[top] = value;

        printf("\nValue Inserted");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nDeleted Value: %d", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack Empty");
    }
    else
    {
        printf("\nStack Elements:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

void main()
{
    int ch;

    clrscr();

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        if(ch == 1)
        {
            push();
        }
        else if(ch == 2)
        {
            pop();
        }
        else if(ch == 3)
        {
            display();
        }
        else
        {
            break;
        }
    }

    getch();
}
