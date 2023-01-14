#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 1000

void sort(char**,int);
void alph(char**, int);

int main()
{
    int k = 0, n = 0;
    char buf[SIZE];
    FILE *fp = fopen("slowa.txt", "w");

    puts("Podaj k.");
    scanf("%i", &k);
    puts("Podaj liczbe n.");
    scanf("%i", &n);

    char **tab = (char**)malloc(n*sizeof(char*));

    puts("Podaj slowa.");
    for(int i = 0; i<n; i++)
    {
        scanf("%999s", buf);
        tab[i] = (char*)malloc((strlen(buf)+1)*sizeof(char));
        strcpy(tab[i], buf);
    }
    sort(tab, n);
    alph(tab, n);
    for(int i = 0; i<k; i++)
        fprintf(fp, "%s\n",tab[i]);

    for(int i = 0; i<n; i++)
        free(tab[i]);
    free(tab);
    fclose(fp);
    return 0;
}

void sort(char** tab, int n)
{
    char temp[SIZE];
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
            if(strlen(tab[i])<strlen(tab[j]))
                {
                strcpy(temp, tab[j]);
                free(tab[j]);
                tab[j] = (char*)malloc((strlen(tab[i])+1)*sizeof(char));
                strcpy(tab[j], tab[i]);
                free(tab[i]);
                tab[i] = (char*)malloc((strlen(temp)+1)*sizeof(char));
                strcpy(tab[i], temp);
                }
    }
}

void alph(char** tab, int n)
{
    char temp[SIZE];
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
        if(strlen(tab[i]) == strlen(tab[j]))
        { 
            if(strcmp(tab[j], tab[i])<0)
            {
                strcpy(temp, tab[j]);
                free(tab[j]);
                tab[j] = (char*)malloc((strlen(tab[i])+1)*sizeof(char));
                strcpy(tab[j], tab[i]);
                free(tab[i]);
                tab[i] = (char*)malloc((strlen(temp)+1)*sizeof(char));
                strcpy(tab[i], temp);
            }
        }
        }
    }
}