/*
*Program wczytuje dwie liczby i zwraca wynik jednego z czerech działań.
*/
#include<stdio.h>

int dodawanie(int a, int b)
{
    int wynik = a+b;
    return wynik;
}

int odejmowanie(int a, int b)
{
    int wynik = a-b;
    return wynik;
}

int mnozenie(int a, int b)
{
    int wynik = a*b;
    return wynik;
}

float dzielenie(int a, int b)
{
    float wynik = (float)a/b;
    return wynik;
}

int main()
{
    int a,b;
    a=b=0;
    int k=0;

    puts("Podaj liczbe a i b.");
    scanf("%5i %5i", &a, &b);
    puts("Wybierz dzialanie:");
    puts("1: a + b");
    puts("2: a - b");
    puts("3: a * b");
    puts("4: a / b");
    scanf("%2i", &k);
    switch(k)
    {
        case 1: printf("%i", dodawanie(a,b)); break;
        case 2: printf("%i", odejmowanie(a,b)); break;
        case 3: printf("%i", mnozenie(a,b)); break;
        case 4: printf("%.3f", dzielenie(a,b)); break;
        default: puts("Blad!");
    }

    return 0;
}