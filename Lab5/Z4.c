/*
*Program sprawdza, czy słowo jest palindromem.
*/
#include<stdio.h>

char zwrot(char napis[], int i)
{
    char znak;
    znak = napis[i];
    return znak;
}

int znak(char a, char b)
{
    int wynik = 0;
    if (a == b) wynik = 1;

    return wynik;
}

void palindrom(char slowo[])
{   
    int dlugosc = 0;
    char litera = 0;
    char litera2 = 0;
    int wynik;
    int pal = 1;
    while(slowo[dlugosc] != 0) dlugosc++;
    dlugosc = dlugosc - 1;
    for(int i=0; i<dlugosc; i++)
    {   
        litera = zwrot(slowo,i);
        litera2 = zwrot(slowo,dlugosc-i);
        wynik = znak(litera,litera2);
        if (wynik != 1)
        {
            puts("To nie jest palindrom.");
            pal = 0;
            break;
        }
    }
    if(pal) puts("To jest palindrom.");
}

int main()
{
    char slowo[30];

    puts("Podaj slowo.");
    scanf("%29s", slowo);
    palindrom(slowo);

    return 0;
}