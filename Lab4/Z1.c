/*
*Program zwraca sumę kwadratów od 1 do n.
*/
#include <stdio.h>

int main()
{
    int n = 0;
    int wynik = 0;
    puts("Podaj liczbe n.");
    scanf("%5i", &n);
    for (int i=1; i<=n; i++)
    {
        wynik=wynik+i*i;
    }

    printf("%i", wynik);

    return 0;
}