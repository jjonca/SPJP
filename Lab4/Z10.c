/*
*Program generuje piłeczkę.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int a1,b1,a2,b2,a3,b3;
    a1=b1=a2=b2=a3=b3=0;
    int array[12][12];
    
    time_t time1;
    time_t time2;

    puts("Podaj pierwsza pare liczb z zakresu 1-10.");
    scanf("%3i %3i", &a1, &b1);
    puts("Podaj druga pare liczb z zakresu 1-10.");
    scanf("%3i %3i", &a2, &b2);

        a3=a2-a1;
        b3=b2-b1;

    array[a1-1][b1-1] = 1;
        
    while(1)
    {   
        printf(" ");
        for (int i=0; i<10; i++) printf("-");
        printf("\n");
        for(int i=0; i<10; i++)
        {
            printf("|");
            for(int j=0; j<10; j++)
            {
                if(array[i][j])
                    {
                        printf("x");
                        array[i][j]=0;
                    }
                    else printf(" ");
            }
            printf("|");
            printf("\n");
        }
        printf(" ");
        for (int i=0;i<10;i++) printf("-");
        printf("\n");

        a1=a2;
        b1=b2;

        if(a1<1)
        {
            a3=-a3;
            a1=1;
            a2=1;
        }
        if(b1<1)
        {
            b3=-b3;
            b1=1;
            b2=1;
        }
        if(a1>10)
        {
            a1=10;
            a3=-a3;
            a2=10;
        }
        if(b1>10)
        
        {
            b1=10;
            b3=-b3;
            b2=10;
        }

        a2=a2+a3;
        b2=b2+b3;
        array[a1-1][b1-1]=1;

        time1 = time(NULL);
        time2 = time(NULL);
        while(time2-time1<5) time2=time(NULL);
        system("clear");
    }

    return 0;
}
