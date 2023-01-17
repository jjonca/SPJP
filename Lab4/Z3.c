/*
*Program wczytuje a i b i zwraca taką liczbę c, że a do potęgi c jest większe od b.
*/
#include<stdio.h>

int main()
{
    int a,b,c;
    a=b=c=0;

    int wynik=1;

    puts("Podaj liczbe a.");
    scanf("%5i",&a);
    puts("Podaj liczbe b.");
    scanf("%5i",&b);

    if (a == 1 && b != 0) puts ("Blad.");
        else 
    {
        while (wynik<=b)
        {
            wynik=wynik*a;
            c++;
        }

        printf("%i",c);
    }

    return 0;
}