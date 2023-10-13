#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi[5];
    int i,enbuyuk=0,sayac=0;

    for(i=0; i<5; i++)
    {
        printf("Lutfen bir sayi giriniz. \n");
        scanf ("%s" ,&sayi[i]);

        if (sayi[i]>enbuyuk)
        {
            enbuyuk=sayi[i];
            sayac=i+1;
        }
}

printf ("%d. girilen sayi %d ile en buyuk sayidir. \n" ,sayac,enbuyuk);


    return 0;
}
