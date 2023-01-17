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

    if(a<b+c || b<a+c || c<a+b) puts("Da sie utworzyc trojkat.");
        else puts("Nie da sie utworzyc trojkata.");

    return 0;
}