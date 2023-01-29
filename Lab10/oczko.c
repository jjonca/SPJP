#include"opcje.h"

void oczko(void)
{
srand((unsigned)time(0));
struct Kostka kgracz;
struct Punkt p1;
p1.k = 0;
p1.c = 0;
int suma = 0;
int guess = 0;
char wybor;
do
{
puts("Zgadnij sume.");
fscanf(stdin,"%2i", &suma);
kgracz.k1 = rand()%6+1;
kgracz.k2 = rand()%6+1;
puts("Wyrzuciles:");
printf("%i %i\n", kgracz.k1, kgracz.k2);
suma = kgracz.k1 + kgracz.k2;
printf("Suma: %i\n", suma);
if(suma == guess)
{
puts("Odgadles.");
p1.c++;
}
else puts("Nie zgadles.");

kgracz.k1 = rand()%6+1;
kgracz.k2 = rand()%6+1;
guess = rand()%10+2;
printf("Komputer zgaduje: %i\n", guess);
puts("Komputer wyrzucil:");
printf("%i %i\n", kgracz.k1, kgracz.k2);
suma = kgracz.k1 + kgracz.k2;
printf("Suma: %i\n", suma);
if(suma == guess)
{
puts("Komputer odgadl.");
p1.k++;
}
else puts("Komputer nie zgadl.");
printf("Masz %i na 10 punktow.\n", p1.c);
printf("Komputer ma %i na 10 punktow.\n", p1.k);
printf("Czy chcesz zakonczyc?\n");
printf("t - tak\nn - nie\n");
scanf(" %c", &wybor);
if(wybor == 't') return;
}
while(p1.k<10 || p1.c<10);
if(p1.c < 10)
{
puts("Przegrales.");
}
}
