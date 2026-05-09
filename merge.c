#include<stdio.h>
#include<conio.h>

void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int temp[10];

    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(i = low; i <= high; i++)
    {
        a[i] = temp[i];
    }
}

void mergesort(int a[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);

        merge(a, low, mid, high);
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

    mergesort(a, 0, 4);

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    getch();
}
