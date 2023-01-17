/*
*Program wypisuje wartości kątów w stopniach dla kątów wyrażonych w radianach.
*/
#include<stdio.h>

int main()
{
    int wybor = 0;
    puts("Dla 0 radianow wybierz 1.");
    puts("Dla 1/6 Pi rad wybierz 2.");
    puts("Dla 1/4 Pi rad wybierz 3.");
    puts("Dla 1/3 Pi rad wybierz 4.");
    puts("Dla 1/2 Pi rad wybierz 5.");
    
    scanf("%2i", &wybor);

    if (wybor ==1 ) puts("0");
        else if (wybor == 2) puts("30");
        else if (wybor == 3) puts("45");
        else if (wybor == 4) puts("60");
        else if (wybor == 5) puts("90");

    return 0;
}