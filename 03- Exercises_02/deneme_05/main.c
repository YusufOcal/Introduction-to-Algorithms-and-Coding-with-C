#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi[10];
    int rastgele,i,enbuyuk,enkucuk;

    enbuyuk=0;
    enkucuk=11;

    for (i=0; i<10; i++)
    {
        sayi[i] = rand()%10+1;

        printf ("%d \n",sayi[i]);

           if (sayi[i]>enbuyuk)
           {
               enbuyuk=sayi[i];
           }
           if (sayi[i]<enkucuk)
           {
               enkucuk=sayi[i];
           }
    }

    printf ("%d en buyuk sayidir. \n" ,enbuyuk);
    printf ("%d en kucuk sayidir. \n" ,enkucuk);

    return 0;
}
