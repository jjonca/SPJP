#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand((size_t)time(NULL));
FILE *fp = fopen("lotto.txt", "w");
if(fp == NULL)
{
    puts("Blad pliku.");
    exit(1);
}
int n = 0;
int tab[6] = {0};
int num = 0;
int jest = 0;
int i = 0;
for(int i = 0; i<6; i++)
{
    num = (rand()%49)+1;
    for(int j = 0; j<n; j++)
    {
    if(tab[j] == num)
    {
    jest = 1;
    break;
    }
    }
    if(jest == 0)
    {
    tab[i] = num;
    n++;
    }
}
for(int i = 0; i<6; i++)
    fprintf(fp,"%i\n",tab[i]);
fclose(fp);

return 0;
}
