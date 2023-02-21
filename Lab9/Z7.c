/*
Napisz strukturę kwadrat składającą się z dwóch punktów definiujących kwadrat składający się z odcinków
poziomych i pionowych. Napisz funkcję, która dla podanego punktu sprawdzi,
czy znajduje się on we wnętrzu kwadratu. 
*/

typedef struct Kwadrat{
float x,y;
} Kwadrat;

typedef struct Punkt{
    float x,y;
} Punkt;

typedef struct Prosta{
    float a,b;
} Prosta;

void prosta(Punkt, Punkt, Prosta*);

int kwad(Kwadrat, Punkt);

Punkt intersection(Prosta, Prosta);

#include<stdio.h>

int main()
{
Kwadrat k1;
Punkt p1;
Prosta pr1;
puts("Podaj wspolrzedna x i y kwadratu.");
scanf("%f", &k1.x, &k1.y);
puts("Podaj wspolrzedne x i y punktu.");
scanf("%f %f",p1.x, p1.y);

    return 0;
}

int kwad(Kwadrat k1, Punkt p1)
{

}

void prosta(Punkt p1, Punkt p2, Prosta* pr1)
{
float a = 0, b = 0;
if((p1.x - p2.x) == 0) return;
a = (p1.y - p2.y)/(p1.x-p2.x);
b = p1.y - a*p1.x;
printf("Rownanie prostej: y = (%.2f) * x + (%.2f) \n", a, b);
}