/*
*Program wczytuje n liczb i tworzy tablice.
*/
#include<stdio.h>

int main()
{
    int n = 0;
    int array[20];

    puts("Podaj wielkosc tablicy.");
    scanf("%5i", &n);
    puts("Podaj liczby w tablicy.");
    for (int i=0; i<n; i++)
    {   
        printf("a[%i] = \n", i);
        scanf("%5i", &array[i]);
    }

       for (int i = 0; i<n; i++)
    {
        printf("a[%i] = %i\n", i, array[i]);
    }

    return 0;
}