/*
*Pobiera długości trzech odcinków i sprawdza, czy można utworzyć trójkąt prostokątny.
*/
#include<stdio.h>

int main()

{
    int a,b,c;
    a=b=c=0;

    puts("Podaj dlugosc pierwszego odcinka.");
    scanf("%5i",&a);
    puts("Podaj dlugosc drugiego odcinka.");
    scanf("%5i",&b);
    puts("Podaj dlugosc trzeciego odcinka.");
    scanf("%5i",&c);
    
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) puts ("Trojkat jest prostokatny.");
        else puts("Trojkat nie jest prostokatny.");

    return 0;
}