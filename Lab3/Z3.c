/*
*Program pobiera dwie liczby i zwraca większą z nich.
*/

#include<stdio.h>

int main()
{
    int liczba1, liczba2;
    liczba1 = liczba2 = 0;
    puts("Podaj pierwsza liczbe.");
    scanf("%5i", &liczba1);
    puts("Podaj druga liczbe.");
    scanf("%5i", &liczba2);
    if (liczba1>liczba2) printf("%i\n",liczba1);
        else if(liczba1<liczba2) printf("%i\n",liczba2);
        else if(liczba1==liczba2) puts("Liczby sa rowne!");
            else puts("Blad!");
    
    return 0;
}