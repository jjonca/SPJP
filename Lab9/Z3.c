#include<stdio.h>

struct Punkt{
int x;
int y;
};

void spr(struct Punkt, struct Punkt, struct Punkt);

int main()
{
struct Punkt t1,t2,t3;

puts("Podaj 1 wspolrzedna x i y");
scanf("%i %i", &t1.x, &t1.y);
puts("Podaj 2 wspolrzedna x i y");
scanf("%i %i", &t2.x, &t2.y);
puts("Podaj 3 wspolrzedna x i y");
scanf("%i %i", &t3.x, &t3.y);
spr(t1,t2,t3);

return 0;
}

void spr(struct Punkt t1, struct Punkt t2, struct Punkt t3)
{

if (((t1.x == t2.x) && (t2.y == t2.y)) || ((t2.x == t3.x) && (t2.y == t3.y)) ||((t1.x == t3.x) && (t1.y == t3.y)))
{
puts("Punkty nie moga byc trojkatem.");
return;
}
if (((t1.x == t2.x) && (t1.x == t3.x)) || ((t1.y == t2.y) && (t2.y == t3.y)))
    {
    puts("Punkty nie moga byc trojkatem.");
    return;
    }
puts("Punkty moga byc trojkatem.");
}
