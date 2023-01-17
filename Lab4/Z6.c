/*
*Program wypisuje prostokąt dla tablicy [a][b].
*/
#include<stdio.h>
#define a 4
#define b 3
#define TABLICA {{1,0,1}, {0,1,1}, {0,0,1},{1,1,1}}

int main()
{
    int array[a][b]=TABLICA;

    printf(" ");
    for(int i=0;i<b;i++)
    {
        printf("-");
    }
    printf("\n");

    for(int i=0; i<a; i++)
    {
        printf("|");
        for(int j=0; j<b; j++)
            {
                if (array[i][j] == 1) printf("x");
                    else printf(" ");
            }
        printf("|");
        printf("\n");
    }

        printf(" ");
        for(int i=0;i<b;i++)
    {
        printf("-");
    }

    return 0;
}