#include<stdio.h>

int dni30(int, int);
int przestepny(int);

int main()
{
    int miesiac = 0;
    int rok = 0;
    int dni = 0;
    puts("Podaj miesiac.");
    scanf("%2i", &miesiac);
    puts("Podaj rok.");
    scanf("%4i", &rok);

    dni = dni30(miesiac, rok);
    printf("%i", dni);

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