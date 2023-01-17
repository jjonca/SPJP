/*
*Program wypisuje elementy większe od sąsiadów w tablicy trójwymiarowej.
*/

#include<stdio.h>

int main()
{
    int tab[50][50][50]={0};
    int x,y,z;
    x=y=z=0;
    int count = 0;

    puts("Podaj wielkosc tablicy[x][y][z].");
        scanf("%3i %3i %3i", &x, &y, &z);
    x ++;
    y ++;
    z ++;
    puts("Podaj elementy tablicy.");
    for(int i=1; i<x; i++)
        for(int j=1; j<y; j++)
            for(int k=1; k<z; k++)
                {    
                    printf("tab[%i][%i][%i] = ",i-1,j-1,k-1);
                    scanf("%5i",&tab[i][j][k]);
                }

    for(int i=1; i<x; i++)
        for(int j=1; j<y; j++)
            for(int k=1; k<z; k++)
                {
                   for(int a=-1; a<=1; a++)
                        for(int b=-1; b<=1; b++)
                            for(int c=-1; c<=1; c++)
                                {
                                    if (tab[i][j][k]>tab[i+a][j+b][k+c]) count++;
                                }
                if (count == 26) printf("%i\n", tab[i][j][k]);
                count=0;                
                }


    return 0;
}