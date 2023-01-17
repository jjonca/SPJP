/*
*Program zwraca przekrój odcinków.
*/
#include<stdio.h>

int por (int a1, int b1, int a2, int b2)
{   
    int a3 = 0;
    int b3 = 0;

    if (a1<a2 && b1<a2) {a3=b3=-1;}
        else if(a1<a2 && b1==a2) {a3=b3=a2;}
        else if(a1==a2 && b1==b2) {a3=a1; b3=b1;}
        else if(a1<a2 && a2<b1 && b1<b2) {a3=a2; b3=b1;}
        else if(a2<a1 && a1<b2 && b2<b1) {a3=a1; b3=b2;}
        else if (a2<a1 && a1==b2) {a3=b3=a1;}
        else if(b2<a1) {a3=b3=-1;}

    return a3;
}
int main()
{   
    int a1, b1, a2, b2;
    int wynik = 0;
    puts("Podaj liczby [a1, b1], [a2, b2].");
    scanf("%5i %5i %5i %5i", &a1, &b1, &a2, &b2);
    printf("a1 = %i, b1 = %i, a2 = %i, b2 = %i\n",a1,b1,a2,b2);
    wynik = por(a1,b1,a2,b2);
    printf("%i\n", wynik);

    return 0;
}