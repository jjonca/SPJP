#include<stdio.h>

void suma(int liczba, int sum)
{   
    if (liczba <= 0)
    {
        printf("%i", sum);
        return;
    }
    sum = sum + liczba % 10;
    liczba = liczba /10;
    suma(liczba, sum);
}

int main()
{
int liczba = 0;

puts("Podaj liczbe.");

scanf("%200i", &liczba);

suma(liczba, 0);

    return 0;
}