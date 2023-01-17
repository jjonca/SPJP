/*
*Program pobiera trzy liczby i zwraca najwieksza z nich.
*/

#include<stdio.h>

int main()
{
    int liczba1,liczba2,liczba3;
    liczba1 = liczba2 = liczba3 = 0;

    puts("Podaj pierwsza liczbe.");
    scanf("%5i", &liczba1);
    puts("Podaj druga liczbe.");
    scanf("%5i", &liczba2);
    puts("Podaj trzecia liczbe.");
    scanf("%5i", &liczba3);

    if (liczba1>liczba2 && liczba1>liczba3) printf("%i\n", liczba1);
        else if(liczba2>liczba1 && liczba2>liczba3) printf("%i\n", liczba2);
        else if (liczba3>liczba1 && liczba3>liczba2) printf("%i\n", liczba3);
            else puts("Liczby sa rowne!");

    return 0;
}