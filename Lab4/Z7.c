/*
*Program sprawdza, czy dana liczba jest pierwsza.
*/

#include<stdio.h>

int main()
{
    int a=0;
    puts("Wprowadz liczbe.");
    scanf("%5i", &a);
    for (int i=2;i<=a;i++)
    {
        if (a == i)
        {
            puts("Liczba jest pierwsza.");
            break;
        }
            else if (a % i == 0)
            {
                puts("Liczba jest zlozona.");
                break;
            }
    }    
    
    return 0;
}