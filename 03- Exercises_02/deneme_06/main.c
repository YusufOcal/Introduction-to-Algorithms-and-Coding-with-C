#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int dizi[10];
    int i,j,tut;

    for (i=0; i<10; i++)
    {
        srand(time(NULL));
        dizi[i]=rand()%10+1;

           for (j=i+1; j<10; j++)
           {
                if (dizi[i]<dizi[j])
                    {
                        tut=dizi[i];
                        dizi[i]=dizi[j];
                        dizi[j]=tut;
                    }

           }
printf ("%5d" ,dizi[i]);
    }


    return 0;
}
