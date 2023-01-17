/*
*Program pobiera trzy liczby i sprawdza, czy tworzą poprawną datę.
*/



#include<stdio.h>

int main()
{
    int dzien, miesiac, rok;
    dzien = miesiac = rok = 0;
    int day31 = 0;
    int data = 0;
    int przestepny=0;

    puts("Podaj dzien.");
    scanf("%3i", &dzien);
    puts("Podaj miesiac.");
    scanf("%3i", &miesiac);
    puts("Podaj rok.");
    scanf("%5i", &rok);

    //sprawdzenie, czy rok jest przestępny
    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) przestepny==1;

    //miesiące mające 31 dni
    if (miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12)
        day31 == 1;
    //luty
        else if (miesiac == 2) day31 = 2;
    //sprawdzenie, czy dzień jest poprawny
        if(day31 != 2)
        {
            if (dzien>0 && dzien<31) data++;
            else if (dzien==31 && day31) data++;
        }
        else if (day31==2)
        {
             if (dzien>0 && dzien<29) data++;
                else if(dzien==29 && przestepny) data++;
        }   
    //sprawdzenie, czy miesiąc jest poprawny
    if (miesiac > 0 && miesiac < 13) data++;
    //sprawdzenie, czy rok jest poprawny
    if(rok>0) data++;

    if(data==3) puts("Data jest poprawna.");
        else puts("Data jest niepoprawna.");

    return 0;
}