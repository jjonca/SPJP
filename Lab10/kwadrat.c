#include"figury.h"

void kwadrat(void)
{
int a;
int pole;
int obwod;

puts("Podaj dlugosc boku.");
fscanf(stdin,"%5i", &a);
pole = a*a;
obwod = 4*a;
fprintf(stdout,"Pole wynosi %i.\n", pole);
fprintf(stdout,"Obwod wynosi %i.\n", obwod);
}
