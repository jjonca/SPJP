/*
*Program sprawdza, czy liczba jest podzielna przez liczby 2-6.
*/

#include<stdio.h>

int main()
{
    int liczba=0;

    puts("Podaj liczbe.");
    scanf("%5i", &liczba);

    //sprawdza podzielnosc
    if (liczba % 2 == 0) puts("2");
        else if (liczba % 3 == 0) puts("3");
        else if (liczba % 4 == 0) puts ("4");
        else if (liczba % 5 == 0) puts ("5");
        else if (liczba % 6 == 0) puts ("6");
            else puts("Liczba nie dzieli sie przez liczby z zakresu 2-6.");
    
    return 0;
}