#include<stdio.h>

int koniec(int, int, int);
int dni30(int, int);
int przestepny(int);

int main()
{

int wynik = 0;
int d, m, r;
d = m = r = 0;

puts("Podaj date.");
scanf("%2i %2i %4i", &d, &m, &r);

wynik = koniec(d, m, r);
printf("%i", wynik);

    return 0;
}

int przestepny(int rok)
{
    int wynik = 0;
    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) wynik = 1;
        else wynik = -1;

    return wynik;
}

int dni30(int miesiac, int rok)
{
    int wynik = 0;
    int przest = 0;
    
    przest = przestepny(rok);
    
    if (miesiac == 1 || miesiac == 3 || miesiac == 5
                || miesiac == 7 || miesiac == 8 || miesiac == 10
                || miesiac == 12) wynik = 31;
                else if (miesiac == 2 && przest == 1) wynik = 29;
                    else if (miesiac == 2 && przest == -1) wynik = 28;
                        else wynik = 30;

    return wynik;
}

int koniec(int d, int m, int r)
{
    int dni = 0;
    int mies = 0;
    
    mies = 12 - m;
    for (int i = 0; i < mies; i++)
        {
            dni = dni + dni30(m+1+i, r);
        }
    dni = dni + dni30(m, r) - d;

    return dni;
}