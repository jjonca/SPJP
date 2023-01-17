/*
*Program wczytuje parę liczb i zwraca wynik potęgowania.
*/

#include <stdio.h>

int main()
{
    int a,b;
    a=b=0;
    int wynik = 1;
    puts("Podaj liczbe a.");
    scanf("%5i",&a);
    puts("Podaj liczbe b.");;
    scanf("%5i",&b);

    for (int i=0; i<b; i++)
    {
        wynik=wynik*a;
    }

    printf("%i",wynik);

    return 0;
}