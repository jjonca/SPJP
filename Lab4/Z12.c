/*
*Program rysuje trójkąt Pascala wysokości n.
*/
#include<stdio.h>

int main()
{
    int array[100][100]={0};
    int pascal[100][100]={0};

    int n,w;
    n=w=0;

    puts("Podaj wartosc n.");
    scanf("%2i",&n);

    w=n*2+1;

    array[0][w/2]=1;
    pascal[0][w/2]=1;

    for(int i=1; i<n; i++)
    {
        for (int j=0; j<w;j++)
        {
            if(array[i-1][j+1] || array[i-1][j-1]) array[i][j]=1;
        }
    }

    for(int i=1; i<n; i++)
    {
        for (int j=1; j<w;j++)
        {
            if(array[i][j]) pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j+1];
        }
    }

    for (int i=0; i<n; i++)
    {   
        if(i<6)
        {
            for(int j=0; j<w; j++)
            {              
                    if(pascal[i][j]==0) printf("   ");
                        else printf(" %i ", pascal[i][j]);
                
            }
        }
        else if(i>5 && i<10)
        {
            for(int j=0; j<w; j++)
            {              
                    if(pascal[i][j]==0) printf("   ");
                        else printf(" %i ", pascal[i][j]);
                
            }
        }
        else
        {
            for(int j=0; j<w; j++)
            {              
                    if(pascal[i][j]==0) printf("   ");
                        else printf(" %i ", pascal[i][j]);
                
            }
        }
        printf("\n");

    }

    return 0;
}