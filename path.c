#include<stdio.h>
#include<conio.h>

void main()
{
    int graph[3][3] = {
        {0, 2, 4},
        {2, 0, 1},
        {4, 1, 0}
    };

    int i;

    clrscr();

    printf("Shortest Distance From Node 0:\n");

    for(i = 0; i < 3; i++)
    {
        printf("0 -> %d = %d\n", i, graph[0][i]);
    }

    getch();
}
