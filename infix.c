#include<stdio.h>
#include<string.h>
#include<conio.h>

char stack[10];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    return stack[top--];
}

void main()
{
    char infix[10], postfix[10];
    int i, j = 0;

    clrscr();

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        if((infix[i] >= 'A' && infix[i] <= 'Z') ||
           (infix[i] >= 'a' && infix[i] <= 'z'))
        {
            postfix[j] = infix[i];
            j++;
        }
        else
        {
            push(infix[i]);
        }
    }

    while(top != -1)
    {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';

    printf("Postfix: %s", postfix);

    getch();
}
