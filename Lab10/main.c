#include<stdio.h>
#include<stdlib.h>
#include"figury.h"

int main()
{
int wybor = 0;
while(1)
{
puts("Co chcesz zrobic?");
puts("Oblicz pole i obwod:");
puts("0 - wyjdz");
puts("1 - kwadrat");
puts("2 - kolo");
fscanf(stdin,"%i", &wybor);

switch(wybor)
{
case 0 :
exit(0);
break;
case 1 :
kwadrat();
break;
case 2:
kolo();
break;
default :
puts("Podaj opcje.");
break;
}
}
return 0;
}
