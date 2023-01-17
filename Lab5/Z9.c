#include<stdio.h>

int przestepny(int);

int main()
{
    int rok = 0;
    int wynik = 0;

    puts("Podaj rok.");
    scanf("%4i", &rok);
    wynik = przestepny(rok);
    if (wynik == 1) puts("Rok jest przestepny.");
        else puts("Rok nie jest przestepny.");
    return 0;
}

int przestepny(int rok)
{
    int wynik = 0;
    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) wynik = 1;
        else wynik = -1;
    return wynik;
}