/*
*Program prosi o dwie liczby i zwraca wynik ich dodawania, odejmowania
*mnożenia i dzielenia oraz resztę z dzielenia.
*/

#include <stdio.h>

int main()

{   
    int liczba1, liczba2;
    liczba1 = liczba2 = 0;
    //Wprowadź pierwszą liczbę.
    puts("Podaj pierwsza liczbe.");
    scanf("%5i", &liczba1);
    puts("Podaj druga liczbe.");
    scanf("%5i", &liczba2);
    printf("%i + %i = %i\n", liczba1, liczba2, liczba1 + liczba2);
    printf("%i - %i = %i\n", liczba1, liczba2, liczba1 - liczba2);
    printf("%i * %i = %i\n", liczba1, liczba2, liczba1 * liczba2);
    printf("%i / %i = %i\n", liczba1, liczba2, liczba1 / liczba2);
    printf("%i mod %i = %i\n", liczba1, liczba2, liczba1 % liczba2);

    return 0;
}