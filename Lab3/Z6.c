/*
*Program pobiera od użytkownika rok i sprawdza, czy jest on przestępny.
*/

#include<stdio.h>

int main()
{
    int rok = 0;

    puts("Podaj rok.");
    scanf("%5i", &rok);

    if (((rok%4 == 0) && (rok%100 !=0)) || (rok%400 == 0)) puts("Rok jest przestepny.");
        else puts("Rok nie jest przestepny.");
        
    return 0;
}