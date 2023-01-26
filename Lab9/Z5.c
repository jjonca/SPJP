#include<stdio.h>

struct Punkt{
float x;
float y;
};
struct Prosta{
float a;
float b;
};

struct Prosta prosta(struct Punkt, struct Punkt);
void rownolegla(struct Prosta, struct Prosta);

int main()
{
struct Punkt p1, p2;
struct Prosta pr1, pr2;
puts("Prosta 1:");
puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%f %f", &p1.x, &p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%f %f", &p2.x, &p2.y);
pr1 = prosta(p1, p2);

puts("Prosta 2:");
puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%f %f", &p1.x, &p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%f %f", &p2.x, &p2.y);
pr2 = prosta(p1, p2);
rownolegla(pr1,pr2);
return 0;
}

struct Prosta prosta(struct Punkt p1, struct Punkt p2)
{
struct Prosta pr;
float a = 0, b = 0;
if((p1.x - p2.x) != 0)
{
pr.a = (p1.y - p2.y)/(p1.x-p2.x);
pr.b = p1.y - a*p1.x;
}
printf("Rownanie prostej: y = (%.2f) * x + (%.2f) \n", pr.a, pr.b);
return pr;
}

void rownolegla(struct Prosta p1, struct Prosta p2)
{
if(p1.a == p2.a)
puts("Proste sa rownolegle.");
else puts("Proste nie sa rownolegle.");
}