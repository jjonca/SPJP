/*
*Program zwraca wartość kąta w radianach dla kąta podanego w stopniach.
*/

#include<stdio.h>

int main()

{
    int kat=0;
    float rad = 0.0;

    puts("Podaj wartosc kata w stopniach.");
    scanf("%5i", &kat);

    rad=(float)kat/180;
    printf("Wartosc kata wynosi %.3f Pi rad.", rad);

    return 0;
}