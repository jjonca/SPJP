#include"figury.h"

void kolo(void)
{
int r;
float pole;
float obwod;
puts("Podaj dlugosc promienia.");
fscanf(stdin,"%5i", &r);
pole = M_PI*r*r;
obwod = 2*M_PI*r;
fprintf(stdout,"Pole wynosi %.2f.\n", pole);
fprintf(stdout,"Obwod wynosi %.2f.\n", obwod);
}
