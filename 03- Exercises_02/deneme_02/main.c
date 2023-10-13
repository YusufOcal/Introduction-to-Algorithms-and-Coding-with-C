#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,sayac,enbuyuk;

    printf("Lutfen bir sayi giriniz. \n");
    scanf ("%d" ,&sayi);

    enbuyuk=sayi;
    sayac=0;

    for (i=0; i<4; i++)
    {
        printf ("Lutfen bir sayi giriniz. \n");
        scanf ("%d" ,&sayi);

        if (sayi>enbuyuk)
        {
            enbuyuk=sayi;
            sayac=i+2;
        }
    }
    printf ("%d. girdiginiz sayi %d ile en buyuk sayidir. \n" ,sayac,enbuyuk);

    return 0;
}
