/*
*Program pobiera przeciwległe wierzchołki prostokąta i oblicza pole i obwód.
*/

#include<stdio.h>

int main()

{
    int x1,y1,x2,y2;
    x1=y1=x2=y2=0;
    int a,b;
    a=b=0;

    puts("Podaj wspolrzedne pierwszego wierzcholka.");
    scanf("%3i %3i", &x1, &y1);
    puts("Podaj wspolrzedne drugiego wierzcholka.");
    scanf("%3i %3i", &x2, &y2);

    a=x2-x1;
    b=y2-y1;

    printf("Pole = %i\n", a*b);
    printf("Obwod = %i\n", 2*a+2*b);

    return 0;
}