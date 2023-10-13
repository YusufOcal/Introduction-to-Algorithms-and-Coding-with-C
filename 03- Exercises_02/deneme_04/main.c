#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int sayi[10];
   int rastgele ;
   int toplam=0,i;

     for (i=0; i<10; i++)
     {
         rastgele = rand()%10;
         sayi[i] = rastgele;

           if (sayi[i]%2==0)
           {
               toplam = toplam + sayi[i];
               printf ("%d. rastgele sayi = %d \n" ,i+1,sayi[i]);
           }
     }
     printf ("\nRastgele girilen cift sayilarin toplami = %d \n" ,toplam);

   return 0;

}
