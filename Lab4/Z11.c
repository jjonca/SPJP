/*
*Program rysuje trójkąt Pascala.
*/
#include<stdio.h>

int main()
{
    int array[7][12]={0};
    int pascal[7][13]={0};

    array[0][6]=1;
    pascal[0][6]=1;

    for(int i=1; i<5; i++)
    {
        for (int j=0; j<12;j++)
        {
            if(array[i-1][j+1] || array[i-1][j-1]) array[i][j]=1;
        }
    }

    for(int i=1; i<5; i++)
    {
        for (int j=1; j<13;j++)
        {
            if(array[i][j]) pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j+1];
        }
    }

    for (int i=0; i<5; i++)
    {
        for(int j=0; j<13; j++)
        {   
                {
                    if(pascal[i][j]==0) printf(" ");
                        else printf("%i", pascal[i][j]);
                }
        }
        printf("\n");

    }

    return 0;
}