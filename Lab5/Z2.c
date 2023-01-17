/*
*Program porównuje dwa znaki.
*/
#include<stdio.h>

int znak(char a, char b)
{
    int wynik = 0;
    if (a == b) wynik = 1;

    return wynik;
}

int main()

{
    char lit1 = 0;
    char lit2 = 0;
    int wynik = 0;

    puts("Podaj znak a.");
    scanf("%1c[^\n]", &lit1);
    fflush(stdin);
    puts("Podaj znak b.");
    scanf("%1c[^\n]", &lit2);

    wynik = znak(lit1, lit2);
    printf("%i", wynik);

    return 0;
}