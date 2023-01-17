/*
*Dla podanej liczby n wypisuje tabele ASCII w n kolumnach.
*/
#include<stdio.h>

int main()
{
    int n = 0;
    int kol = 0;
    int znak = 0;

    puts("Podaj wartosc n.");
    scanf("%4i", &n);

        if(128 % n != 0)
    {
        kol = 128/n + 1;
    }
        else kol = 128/n;

    for(int i=0; i<kol; i++)
        {   
            znak=i;
            for(int j=1; j<=n; j++)
            {
            if(znak<128) printf(" %c ", znak);
                else printf(" ");
            znak=znak+kol;
            if(j==n) printf("\n");
            }
        }

    return 0;
}