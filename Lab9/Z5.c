#include<stdio.h>

struct Punkt{
int x;
int y;
};

void rownolegla(struct Punkt, struct Punkt, struct Punkt, struct Punkt);

int main()
{
struct Punkt p1, p2, p3, p4;

puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%i %i", &p1.x, &p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%i %i", &p2.x, &p2.y);
puts("Podaj wspolrzedne x i y punktu 3:");
scanf("%i %i", &p3.x, &p3.y);
puts("Podaj wspolrzedne x i y punktu 4:");
scanf("%i %i", &p4.x, &p4.y);
rownolegla(p1, p2, p3, p4);


return 0;
}

void rownolegla(struct Punkt p1, struct Punkt p2, struct Punkt p3, struct Punkt p4)
{
int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
if((p2.x-p1.x) == 0) return;
a1 = (p2.y - p1.y)/(p2.x-p1.x);
b1 = p1.y - a1*p1.x;

printf("Rownanie 1 prostej: y = (%i)*x + %i\n", a1, b1);

if((p4.x-p3.x) == 0) return;
a2 = (p4.y - p3.y)/(p4.x-p3.x);
b2 = p3.y - a2*p3.x;

printf("Rownanie 2 prostej: y = (%i)*x + %i\n", a2, b2);

if(a1 == a2)
    puts("Proste sa rownolegle.");
    else puts("Proste nie sa rownolegle.");
}
