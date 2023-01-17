/*
Program przepisuje tablicę trójwymiarową na jednowymiarową.
*/

#define x 2
#define y 3
#define z 3
#define TABLICA3 {{{0,1,2},{3,4,5},{6,7,8}},{{9,10,11},{12,13,14},{15,16,17}}}

#include <stdio.h>

int main()
{
    int tab3 [x][y][z] = TABLICA3;
    int tab [x*y*z+1];
    int n=0;

   // for(int i=0; i<x; i++)
    //    for(int j=0; j<y; j++)
     //       for(int k=0; k<z; k++) printf("tab3[%i][%i][%i] = %i \n", i,j,k,tab3[i][j][k]);

    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++)
            for(int k=0; k<z; k++)
                {
                    tab[n] = tab3[i][j][k];
                    n++;
                }
    for(int i=0; i<n; i++) printf("tab[%i] = %i\n", i, tab[i]);

    return 0;
}