/*
Napisz strukturę pozwalającą na przechowywanie ciągu dowolnie wielu punktów.
Struktura powinna zawierać pole z punktem oraz wskaźnik na następny element ciągu
będącym strukturą tego samego typu. Napisz funkcję,
która przyjmuje wskaźnik na pierwszy element struktury i wypisuje kolejno wszystkie elementy ciągu.
Zastanów się jak oznaczyć ostatni element ciągu.
*/

#include<stdio.h>
#include<stdlib.h>

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