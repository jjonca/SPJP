#include<stdio.h>

int roznica(int, int, int, int, int, int);
int koniec(int, int, int);
int dni30(int, int);
int przestepny(int);

int main()
{
    int d1, m1, r1, d2, m2, r2;
    d1 = m1 = r1 = d2 = m2 = r2 = 0;
    int wynik = 0;

    puts("Podaj pierwsza date.");
    scanf("%2i %2i %4i", &d1, &m1, &r1);
    puts("Podaj druga date.");
    scanf("%2i %2i %4i", &d2, &m2, &r2);

    wynik = roznica(d1, m1, r1, d2, m2, r2);
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

int roznica(int d1, int m1, int r1, int d2, int m2, int r2)
{
    int wynik = 0;
    int lat = 0;
    int dni = 0;

    lat = r2 - r1;

    for (int i = 1; i<lat; i++)
        {
            if (przestepny(r1+i) == 1) wynik = wynik + 366;
                    else wynik = wynik + 355;
        }        
    
    if (lat>0)
        {
            wynik = wynik + koniec(d1, m1, r1);
            dni = koniec(d2, m2, r2);
                if (przestepny(r2) == 1) wynik = wynik + 366 - dni;
                    else wynik = wynik + 365 - dni;        

        }
            else wynik = koniec(d1, m1, r1) - koniec(d2,m2,r2);
            
    return wynik;
}