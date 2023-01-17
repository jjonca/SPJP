#include<stdio.h>

int wczesniejsza(int, int, int, int, int, int);

int main()
{
    int d1, m1, r1, d2, m2, r2;
    d1 = m1 = r1 = d2 = m2 = r2 = 0;
    int wynik = 0;

    puts("Podaj pierwsza date.");
    scanf("%2i %2i %4i", &d1, &m1, &r1);
    puts("Podaj druga date.");
    scanf("%2i %2i %4i", &d2, &m2, &r2);
    wynik = wczesniejsza(d1, m1, r1, d2, m2, r2);
    if (wynik == 1) puts("Data pierwsza jest wczesniejsza.");
        else if (wynik == 2) puts("Data druga jest wczesniejsza.");
            else puts ("Daty sa rowne.");
    
    return 0;
}

int wczesniejsza(int d1, int m1, int r1, int d2, int m2, int r2)
{
    int wynik = 0;

    if (r1>r2) wynik = 1;
        else if (r1<r2) wynik = 2;
            else
            {
                if (m1>m2) wynik = 1;
                    else if (m1<m2) wynik = 2;
                        else 
                        {
                            if(d1>d2) wynik = 1;
                                else if(d1<d2) wynik = 2;
                                    else wynik = -1;
                        }
            }
    return wynik;
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