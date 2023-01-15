#include<stdio.h>

struct Punkt{
int x;
int y;
};

int main()
{
struct Punkt p;

puts("Podaj punkt x");
scanf("%i", &p.x);
puts("Podaj punkt y");
scanf("%i", &p.y);

puts("Wspolrzedne punktu:");
printf("x = %i y = %i", p.x, p.y);

return 0;
}
