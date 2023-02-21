#include<stdio.h>
#include<math.h>

struct Punkt{
float x;
float y;
};
struct Prosta{
float a;
float b;
};

struct Czworokat{
    struct Punkt p1;
    struct Punkt p2;
    struct Punkt p3;
    struct Punkt p4;
};

void figura(struct Czworokat);

struct Prosta prosta(struct Punkt, struct Punkt);
int rownolegla(struct Prosta, struct Prosta);
int prostopadla(struct Prosta, struct Prosta);

int main()
{
struct Czworokat c1;
struct Prosta pr1, pr2;

puts("Podaj wspolrzedne x i y punktu 1:");
scanf("%f %f", &c1.p1.x, &c1.p1.y);
puts("Podaj wspolrzedne x i y punktu 2:");
scanf("%f %f", &c1.p2.x, &c1.p2.y);

puts("Podaj wspolrzedne x i y punktu 3:");
scanf("%f %f", &c1.p3.x, &c1.p3.y);
puts("Podaj wspolrzedne x i y punktu 4:");
scanf("%f %f", &c1.p4.x, &c1.p4.y);

figura(c1);

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
//printf("Rownanie prostej: y = (%.2f) * x + (%.2f) \n", pr.a, pr.b);
return pr;
}

int rownolegla(struct Prosta p1, struct Prosta p2)
{
if(p1.a - p2.a<0.000001)
{
    //puts("Proste sa rownolegle.");
    return 1;
}
//else puts("Proste nie sa rownolegle.");
return 0;
}

int prostopadla(struct Prosta p1, struct Prosta p2)
{
if(p1.a + -p2.a<0.00001)
{
    //puts("Proste sa prostopadle.");
    return 1;
}
//else puts("Proste nie sa prostopadle.");
return 0;
}

void figura(struct Czworokat c1)
{
int rown = 0;
int prost = 0;
struct Prosta pr1 = prosta(c1.p1, c1.p2);
struct Prosta pr2 = prosta(c1.p2, c1.p3);
struct Prosta pr3 = prosta(c1.p3, c1.p4);
struct Prosta pr4 = prosta(c1.p4, c1.p1);
rown = rownolegla(pr1, pr3);
rown += rownolegla(pr2, pr4);
prost = prostopadla(pr1,pr2);
prost+= prostopadla(pr3,pr4);
if(rown == 2 && prost == 2)
{
    puts("To kwadrat.");
}
else if(rown == 2)
{
    puts("To rownoleglobok.");
}
else if(rown == 1)
{
    puts("To trapez");
}
else puts("To inna figura.");
}