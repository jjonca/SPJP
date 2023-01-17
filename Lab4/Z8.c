/*
*Program zwraca b liczb pierwszych większych lub równych a.
*/

#include<stdio.h>

int main()
{
int a,b;
a=b=0;
int next=a;
int count=0;

puts("Podaj liczbe a.");
scanf("%5i", &a);
puts("Podaj liczbe b.");
scanf("%5i", &b);

    while(count < b)
    {
        for(int j = 2; j <= next; j++)
        {
            if(j == next)
            {
            printf("%i\n",next);
            count++;
            break;
            }
            else if(next % j == 0) break;
        }
        next ++;
    }

    return 0;
}