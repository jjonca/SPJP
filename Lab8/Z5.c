#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct Plik
{
    int litera;
    int cyfra;
    int znak;
    int poz;
}p1;

int main()
{
FILE *fp = fopen("2.txt", "r");
char ch = 0;
struct Plik p1 = {0, 0, 0, 0};

while((ch = getc(fp)) != EOF)
{
    if(isalpha(ch)) p1.litera ++;
    else if (isdigit(ch)) p1.cyfra ++;
    else if (isblank(ch)) p1.znak ++;
    else p1.poz ++;
}
puts("W pliku jest:");
printf("Liter: %i\n", p1.litera);
printf("Cyfr: %i\n", p1.cyfra);
printf("Znakow: %i\n", p1.znak);
printf("Inne: %i\n", p1.poz);

fclose(fp);

    return 0;
}