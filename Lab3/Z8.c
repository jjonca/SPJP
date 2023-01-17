/*
*Program pobiera liczby i sprawdza, ile dni, miesięcy i lat dzieli dwie daty.
*/

#include<stdio.h>

int main()

{
    int dzien1, miesiac1, rok1, dzien2, miesiac2, rok2;
    dzien1=dzien2=miesiac1=miesiac2=rok1=rok2=0;

    int przestepny1, przestepny2;
    przestepny1 = przestepny2 = 0;
    int lata,miesiace,dni;
    lata=miesiace=dni=0;
    int miesiac1_31, miesiac2_31;
    miesiac1_31=miesiac2_31=0;

    puts("Podaj dzien, miesiac i rok pierwszej daty.");    
    scanf("%3i %3i %5i", &dzien1, &miesiac1, &rok1);

    puts("Podaj dzien, miesiac i rok drugiej daty.");    
    scanf("%3i %3i %5i", &dzien2, &miesiac2, &rok2);

    //sprawdzenie, czy rok jest przestępny
    if((rok1 % 4==0 && rok1 % 100 !=0) || rok1 % 400 ==0) przestepny1=1;
    if((rok2 % 4==0 && rok2 % 100 !=0) || rok2 % 400 ==0) przestepny2=1;

    //sprawdzenie, czy podany miesiac ma 31 dni
    if(miesiac1==1||miesiac1==3||miesiac1==5||miesiac1==7||miesiac1==8||miesiac1==10||miesiac1==12) miesiac1_31=1;
    if(miesiac2==1||miesiac2==3||miesiac2==5||miesiac2==7||miesiac2==8||miesiac2==10||miesiac2==12) miesiac2_31=1;
    //czy to luty
    if(miesiac1==2) miesiac1_31=2;
    if(miesiac2==2) miesiac2_31=2;

    
    //przypadek1
    if((miesiac1<=miesiac2) && dzien1<=dzien2)
        {
            lata=rok2-rok1;
            miesiace=miesiac2-miesiac1;
            dni=dzien2-dzien1;
        }
    //przypadek2
    else if((miesiac1>miesiac2) && (dzien1<dzien2))
    {
        lata=(rok2-rok1)-1;
        miesiace=12-(miesiac1-miesiac2);
        dni=dzien2-dzien1;
    }
    //przypadek3
    else if((miesiac1<miesiac2) && (dzien1>dzien2))
    {
        lata=rok2-rok1;
        miesiace=miesiac2-miesiac1-1;
            //jeśli to luty
            if(miesiac1_31==2)
            {
                if (przestepny1) dni=(29-dzien1)+dzien2;
                    else dni=(28-dzien1)+dzien2;
            }
            //jesli to nie luty
            else if(miesiac1_31) dni=(31-dzien1)+dzien2;
                else dni=(30-dzien1)+dzien2;    
    }
    //przypadek 4
    else if(miesiac1>miesiac2 && dzien1>dzien2)
    {
        lata=(rok2-rok1)-1;
        miesiace=12-(miesiac1-miesiac2);
        //jeśli to luty
            if(miesiac1_31==2)
            {
                if (przestepny1) dni=(29-dzien1)+dzien2;
                    else dni=(28-dzien1)+dzien2;
            }
            //jesli to nie luty
            else if(miesiac1_31) dni=(31-dzien1)+dzien2;
                else dni=(30-dzien1)+dzien2;  
    }
    printf("Daty dzieli dni: %i, miesiecy: %i, lat: %i", dni, miesiace, lata);

    return 0;
}