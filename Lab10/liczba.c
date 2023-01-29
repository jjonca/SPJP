#include"opcje.h"

void liczba(void)
{
srand((unsigned)time(0));

int count = 9;
int guess = 0;
int dobra = 0;
int dliczba = 1+rand()%1000000;
do
{
//fprintf(stdout,"Liczba to %i\n", dliczba);
fprintf(stdout,"Zgadnij liczbe.\n");
fflush(stdin);
fscanf(stdin,"%8i", &guess);
//fprintf(stdout,"Guess to %i\n", guess);
if(guess>dliczba)
{
puts("Liczba jest mniejsza.");
fprintf(stdout,"Pozostalo prob: %i\n", count);
}
else if(guess<dliczba)
{
puts("Liczba jest wieksza.");
fprintf(stdout,"Pozostalo prob: %i\n", count);
}
else if (dliczba == guess)
{
puts("Gratulacje, wygrales.");
dobra = 1;
}
}
while(count-->0 && dobra == 0);
if(dobra == 0)
{
puts("Przegrales.");
}
}
