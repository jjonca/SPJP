/*
*Program prosi o odgadniecie liczby od 1 do 5.
*/

#define LICZBA 4

#include<stdio.h>

int main()

{
    int guess;
    guess=0;

    puts("Podaj liczbe od 1 do 5.");
    scanf("%2i", &guess);
            if (guess==LICZBA) puts ("Zgadles!");
            else 
            {   
                if (guess<1 || guess>5) puts ("Zmarnowales szanse.");
                puts ("Sproboj ponownie.");
                scanf("%2i", &guess);
                if (guess==LICZBA) puts ("Zgadles!");
                    else 
                    {
                        if (guess<1 || guess>5) puts ("Zmarnowales szanse.");
                        puts ("Sproboj ponownie.");
                        scanf("%2i", &guess);
                         if (guess==LICZBA) puts ("Zgadles!");
                            else
                            {
                                if (guess<1 || guess>5) puts ("Zmarnowales szanse.");
                                puts("Koniec. Nie udalo sie.");
                            }
                    }
            }



    return 0;
}