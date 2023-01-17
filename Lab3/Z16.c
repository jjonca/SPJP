/*
*Program prosi o odgadnięcie liczby od 1 do 5 ale jest podstępny.
*/

#include<stdio.h>

int main()

{
    int guess=0;
    int j,d,t,c,p;
    j=d=t=c=p=1;
    puts("Podaj liczbe od 1 do 5.");
    scanf("%2i", &guess);
        if (guess<1 || guess>5) puts("Zmarnowales szanse. Sprobuj ponownie.");    
            else puts("Liczba nieprawidlowa, sprobuj ponownie.");
        if (guess==1) j=0;
            else if (guess==2) d=0;
            else if (guess==3) t=0;
            else if (guess==4) c=0;
            else if (guess==5) p=0;
    scanf("%2i", &guess);
    if (guess<1 || guess>5) puts("Zmarnowales szanse. Sprobuj ponownie.");    
            else puts("Liczba nieprawidlowa, sprobuj ponownie.");
        if (guess==1) j=0;
            else if (guess==2) d=0;
            else if (guess==3) t=0;
            else if (guess==4) c=0;
            else if (guess==5) p=0;
    scanf("%2i", &guess);
        if (guess<1 || guess>5) puts("Zmarnowales szanse. Sprobuj ponownie.");    
            else puts("Liczba nieprawidlowa, sprobuj ponownie.");
        if (guess==1) j=0;
            else if (guess==2) d=0;
            else if (guess==3) t=0;
            else if (guess==4) c=0;
            else if (guess==5) p=0;
    scanf("%2i", &guess);
        if (guess<1 || guess>5) puts("Zmarnowales szanse.");
        if (guess==1) j=0;
            else if (guess==2) d=0;
            else if (guess==3) t=0;
            else if (guess==4) c=0;
            else if (guess==5) p=0;
            puts("Koniec. Nie udalo sie. Prawidlowa liczba to:");
if (j ==1) puts("1");
    else if (d==1) puts("2");
    else if (t==1) puts("3");
    else if (c==1) puts ("4");
    else if (p==1) puts("5");

    return 0;
}