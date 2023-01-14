#include<stdio.h>
#define ROZMIAR 10

void element(int tab[], int liczba, int n)
{
    if (n > ROZMIAR)
    {
        puts("Brak elementu w tablicy!");
        return;
    }
    if (liczba == tab[n])
    {
        printf("Element %i jest w tablicy tab[%i] = %i. \n", liczba, n, tab[n]);
        return;   
    }
    element(tab, liczba, n+1);
}

int main()
{
    int tab[] = {0,1,2,3,5,6,7,8,9,10};
    int liczba = 0;

    puts("Podaj liczbe 0-10");
    scanf("%2i", &liczba);
    element(tab, liczba, 0);

    return 0;
}