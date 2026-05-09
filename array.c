#include<stdio.h>

int arr[10] = {10,20,30,40,50};
int n = 5;
int i;

void display()
{
    printf("\nArray Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insert()
{
    int pos, value;

    printf("Enter Position: ");
    scanf("%d", &pos);

    printf("Enter Value: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;

    n++;

    display();
}

void delete1()
{
    int pos;

    printf("Enter Position to Delete: ");
    scanf("%d", &pos);

    for(i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    display();
}

void update()
{
    int pos, value;

    printf("Enter Position: ");
    scanf("%d", &pos);

    printf("Enter New Value: ");
    scanf("%d", &value);

    arr[pos] = value;

    display();
}

void search()
{
    int value, found = 0;

    printf("Enter Value to Search: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            printf("Value Found at Index %d\n", i);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Value Not Found\n");
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Update");
        printf("\n4.Search");
        printf("\n5.Display");
        printf("\n6.Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            insert();
        }
        else if(ch == 2)
        {
            delete1();
        }
        else if(ch == 3)
        {
            update();
        }
        else if(ch == 4)
        {
            search();
        }
        else if(ch == 5)
        {
            display();
        }
        else
        {
            break;
        }
    }

    return 0;
}
