/*
*Program zwraca i-ty znak z łańcucha znaków.
*/
#include<stdio.h>

char zwrot(char napis[], int i)
{
    char znak;
    znak = napis[i];
    return znak;
}

int main()

{
    int i;
    char znak;
    char napis[40];

    puts("Podaj napis.");
    scanf("%39s", napis);
    puts("Ktora litere zwrocic?");
    scanf("%2i", &i);
    znak = zwrot(napis, i-1);
    printf("%c \n", znak);
    return 0;
}