#include<stdio.h>
#include<string.h>

int palindrom(const char *, int, int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {   
        puts("Zla liczba argumentow. Podaj slowo.");
        return -1;
    }

    int rozmiar = 0;
    
    rozmiar = strlen(argv[1])-1;
    const char *slowo = argv[1];

    if(palindrom(slowo, rozmiar, 0)) puts("To palindrom!");
    else puts("To nie palindrom!");

    return 0;
}

int palindrom(const char *tab, int n, int c)
{   
    if (c>n) return 1;
    if(*(tab+c) != *(tab+n-c)) return 0;
    palindrom(tab, n, c+1);   
}