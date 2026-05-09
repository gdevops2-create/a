#include<stdio.h>
#include<conio.h>

void quicksort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if(low < high)
    {
        pivot = a[low];
        i = low;
        j = high;

        while(i < j)
        {
            while(a[i] <= pivot && i < high)
            {
                i++;
            }

            while(a[j] > pivot)
            {
                j--;
            }

            if(i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

void main()
{
    int a[5], i;

    clrscr();

    printf("Enter 5 Elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a, 0, 4);

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
}
