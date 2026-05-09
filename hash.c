#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5] = {-1,-1,-1,-1,-1};
    int value, index, i, search;

    clrscr();

    printf("Enter Value: ");
    scanf("%d",&value);

    index = value % 5;

    arr[index] = value;

    printf("\nHash Table:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter Value To Search: ");
    scanf("%d",&search);

    index = search % 5;

    if(arr[index] == search)
    {
        printf("Value Found at Index %d", index);
    }
    else
    {
        printf("Value Not Found");
    }

    getch();
}
