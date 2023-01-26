#include<stdio.h>

struct Punkt{
float x;
float y;
};

void prosta(struct Punkt, struct Punkt);

int main()
{
struct Punkt p1, p2;

puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%f %f", &p1.x, &p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%f %f", &p2.x, &p2.y);
prosta(p1, p2);


return 0;
}

void prosta(struct Punkt p1, struct Punkt p2)
{
float a = 0, b = 0;
if((p1.x - p2.x) == 0) return;
a = (p1.y - p2.y)/(p1.x-p2.x);
b = p1.y - a*p1.x;
printf("Rownanie prostej: y = (%.2f) * x + (%.2f) \n", a, b);
}
