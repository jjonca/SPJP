/*
*Program pobiera znak lub kod ASCII i sprawdza, czy jest to litera alfabetu.
*/

#include<stdio.h>

int main()
{
    char litera;
    int liczba = 0;
    int wybor = 0;

    puts("Podaj litere lub kod ASCII.");
    puts("Litera, wybierz 1.");
    puts("Kod ASCII wybierz 2.");

    scanf("%2i", &wybor);

    switch (wybor)
    {
        case 1: puts("Podaj litere.");
                scanf("%2s", &litera);
                printf ("Liczba to: %i\n", litera);
                break;
        case 2: puts("Podaj kod ASCII.");
                scanf("%4i", &liczba);
                break;
    }

    //Sprawdź literę.
    if (wybor==1)
    {
        //printf ("Litera to: %i\n", litera);
        if ((litera>64 && litera<91) || (litera>96 && litera<123)) puts("Jest to litera alfabetu.");
        else puts("Nie jest to litera alfabetu.");
    }
    
    //Sprawdź znak ASCII.

    if (wybor==2)
    {
       //printf ("Litera to: %i\n", liczba);
        if ((liczba>64 && liczba<91) || (liczba>96 && liczba<123)) puts("Jest to litera alfabetu.");
        else puts("Nie jest to litera alfabetu.");
    }

    return 0;
}