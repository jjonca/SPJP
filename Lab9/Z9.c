/*
Korzystając z poprzedniego zadania napisz funkcję sprawdzającą
czy pierwszy i ostatni element ciągu zawierają ten sam punkt. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Punkt {
    float x;
    float y;
};

typedef struct Ciag {
    struct Punkt p;
    struct Ciag *nast;
} Ciag;


Ciag * CreateStructure(float, float, Ciag*);
void Print(Ciag*);
void Porownaj(Ciag*);

int main()
{
    float x, y;
    char ch;
    int choice;
    Ciag *root = NULL;
    Ciag * wsk = NULL;

    while(1)
    {
        printf("Co chcesz zrobic?\n\
1 - wprowadz wspolrzedne\n\
2 - wypisz\n\
3 - sprawdz punkty\n\
0 - wyjdz\n");

        scanf(" %i", &choice);
        
        switch(choice)
        {
            case 0 :
                exit(0);
            case 1 :
                while(1)
                {
                printf("Podaj wspolrzedna x i y punktu. q - quit\n");
                    if(scanf("%f %f", &x, &y) != 2)
                    {
                    if((ch = getchar()) == 'q') break;
                        else {
                            printf("Podales zle dane. Sprobuj ponownie.\n");
                            fflush(stdin);
                        }
                    }
                    else
                    {
                    if(root == NULL){
                        root = (Ciag*)malloc(sizeof(Ciag));
                        root -> nast = NULL;
                        root ->p.x = x;
                        root ->p.y = y;
                    }
                    else if(wsk == NULL){
                        wsk = (Ciag*)malloc(sizeof(Ciag));
                        root ->nast = wsk;
                        wsk-> p.x = x;
                        wsk -> p.y = y;
                        wsk ->nast = NULL;
                    }
                    else wsk = CreateStructure(x,y, wsk);
                    }
                }
                    break;
            case 2 :
                Print(root);
                break;
            case 3 :
                Porownaj(root);
                break;

            default :
                printf("Wybierz wlasciwa opcje. \n");
                break;
        }
    }

    return 0;
}

Ciag * CreateStructure(float x, float y, Ciag* wsk)
{
    Ciag * nowy = (Ciag*)malloc(sizeof(Ciag));
    wsk ->nast = nowy;
    nowy -> nast = NULL;
    nowy -> p.x = x;
    nowy -> p.y = y;

    return nowy;
}

void Print(Ciag * root)
{
if (root == NULL){
    printf("Lista jest pusta!\n");
    return;
    }
else{
do
{
    printf("x = %f y = %f\n", root->p.x, root->p.y);
    root = root->nast;
}
while(root != NULL);
}
}

void Porownaj(Ciag*root)
{
    Ciag * wsk = NULL;
    int id = 0;
    if (root == NULL)
        {
            printf("Lista jest pusta!\n");
            return;
        }
    else if(root ->nast == NULL)
        {
            printf("Zbyt mala liczba elementow!\n");
            return;
        }
    wsk = root -> nast;
    while(wsk->nast != NULL)
        wsk = wsk ->nast;
    if (abs(root->p.x - wsk->p.x) <0.00001) id++;
    if (abs(root->p.y - wsk->p.y) <0.00001) id++;
    if (id == 2) printf("Wspolrzedne sa identyczne.\n");
        else printf("Wspolrzedne sie roznia.\n");
}