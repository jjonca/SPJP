#include<stdio.h>

int data(int, int, int);
int przestepny(int);
int dni30(int, int);

int main()
{
    int dzien, miesiac, rok;
    dzien = miesiac = rok = 0;
    int wynik = 0;
    puts("Podaj date.");
    scanf("%2i %2i %4i", &dzien, &miesiac, &rok);
    wynik = data(dzien, miesiac, rok);

    return 0;
}

int przestepny(int rok)
{
    int wynik = 0;
    if (rok % 4 == 0 && rok % 100 !=0 || rok % 400 == 0) wynik = 1;
        else wynik = -1;
    return wynik;
}

int data(int dzien, int miesiac, int rok)
{
    int przest = przestepny(rok);
    int dobra = 0;
    int dni = 0;
    dni = dni30(miesiac, rok);
    if (0 < dzien && dzien < dni) dobra++;
    if (0< miesiac && miesiac < 13) dobra++;
    if (-1 < rok && rok < 2023) dobra++;
    if (dobra == 3) 
        {
            puts("Data jest poprawna.");
            dobra = 1;
        }
        else 
            {
                puts("Data jest niepoprawna.");
                dobra = -1;
            }

        return dobra;
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