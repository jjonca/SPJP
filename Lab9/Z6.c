#include<stdio.h>
#include<math.h>

struct Punkt{
int x;
int y;
};

struct czworokat{
struct Punkt p1;
struct Punkt p2;
struct Punkt p3;
struct Punkt p4;
};

void spr(struct czworokat);

int main()
{
struct czworokat c1;

puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%i %i", &c1.p1.x, &c1.p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%i %i", &c1.p2.x, &c1.p2.y);
puts("Podaj wspolrzedne x i y punktu 3:");
scanf("%i %i", &c1.p3.x, &c1.p3.y);
puts("Podaj wspolrzedne x i y punktu 4:");
scanf("%i %i", &c1.p4.x, &c1.p4.y);
spr(c1);

return 0;
}

void spr(struct czworokat c1)
{
int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0, a4 = 0, b4 = 0;
int dl1 = 0, dl2 = 0;

if(c1.p2.x-c1.p1.x == 0) return;

a1 = (c1.p2.y - c1.p1.y)/(c1.p2.x-c1.p1.x);
b1 = c1.p1.y - a1*c1.p1.x;

printf("Rownanie 1 prostej: y = (%i)*x + %i\n", a1, b1);

if(c1.p3.x-c1.p2.x == 0) return;

a2 = (c1.p3.y - c1.p2.y)/(c1.p3.x-c1.p2.x);
b2 = c1.p2.y - a2*c1.p2.x;

printf("Rownanie 2 prostej: y = (%i)*x + %i\n", a2, b2);

if(c1.p4.x-c1.p3.x == 0) return;

a3 = (c1.p4.y - c1.p3.y)/(c1.p4.x-c1.p3.x);
b3 = c1.p3.y - a3*c1.p4.x;

printf("Rownanie 3 prostej: y = (%i)*x + %i\n", a3, b3);

if(c1.p4.x-c1.p1.x == 0) return;

a4 = (c1.p4.y - c1.p1.y)/(c1.p4.x-c1.p1.x);
b4 = c1.p1.y - a4*c1.p1.x;

printf("Rownanie 4 prostej: y = (%i)*x + %i\n", a4, b4);

dl1 = abs(c1.p2.y - c1.p1.y);
dl2 = abs(c1.p4.x - c1.p1.x);

if((a1 == a2) && (a3 == a4) && (dl1 == dl2))
    {
        puts("Figura jest kwadratem.");
        return;
    }

if((a1 == a3) && (a2 == a4))
    {
    puts("Figura jest rownoleglobokiem.");
    return;
    }
if(a1 == a3)
    {
    puts("Figura jest trapezem.");
    return;
    }
puts("Figura jest innym czworokatem.");
}



