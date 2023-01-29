#include"opcje.h"

int main()
{
int wybor = 0;
while(1)
{
puts("W co chcesz zagrac?");
puts("0 - wyjdz");
puts("1 - odgadnij liczbe");
puts("2 - zgadnij sume oczek");
fscanf(stdin,"%i", &wybor);

switch(wybor)
{
case 0 :
exit(0);
break;
case 1 :
liczba();
break;
case 2:
oczko();
break;
default :
puts("Podaj opcje.");
break;
}
}
return 0;
}
