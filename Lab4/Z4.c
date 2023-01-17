/*
*Program dla zadanej tablicy liczb tworzy tablicę kwadratów tych liczb.
*/
#include<stdio.h>

int main()
{
    int n = 5;
    int array[]={1,2,3,4,5};
    
    for (int i=0; i<n; i++)
    {
        array[i]=array[i]*array[i];
    }

    for (int i = 0; i<n; i++)
    {
        printf("a[%i] = %i\n", i, array[i]);
    }

    return 0;
}
