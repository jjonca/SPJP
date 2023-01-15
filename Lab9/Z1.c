#include<stdio.h>

struct dane{
char imie[20];
char nazwisko[20];
int tel;

};

int main()
{
struct dane osoba1 = {"Imie1", "Nazwisko1", 289768345};
struct dane osoba2 = {"Imie2", "Nazwisko2", 345921194};

printf("Dane:");
printf("Imie: %s\n",osoba1.imie);
printf("Nazwisko: %s\n", osoba1.nazwisko);
printf("Tel: %i\n", osoba1.tel);

printf("Imie: %s\n",osoba2.imie);
printf("Nazwisko: %s\n", osoba2.nazwisko);
printf("Tel: %i\n", osoba2.tel);


return 0;
}
