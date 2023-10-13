#include <stdio.h>
#include <stdlib.h>

int main()

    /*float dizi[4];
    float toplam;
    printf ("Lutfen 1. sayinizi giriniz. \n");
    scanf ("%f" ,&dizi[0]);
    printf ("Lutfen 2. sayinizi giriniz. \n");
    scanf ("%f" ,&dizi[1]);                        // Ya da þu sekilde de yazabiliriz.
    printf ("Lutfen 3. sayinizi giriniz. \n");
    scanf ("%f" ,&dizi[2]);                        // printf("Lutfen 4 tane sayi giriniz. \n");
    printf ("Lutfen 4. sayinizi giriniz. \n");
    scanf ("%f" ,&dizi[3]);                        // scanf ("%f%f%f%f" ,&dizi[0],&dizi[1],&dizi[2],&dizi[3]);
    toplam = dizi[0]+dizi[1]+dizi[2]+dizi[3];
    printf ("%.2f + %.2f + %.2f + %.2f = %.2f" ,dizi[0],dizi[1],dizi[2],dizi[3],toplam);       // Ya da su sekilde de yazabiliriz.
                                                                                   // printf ("%.2f + %.2f + %.2f +%.2f = %.2f" ,dizi[0],dizi[1],dizi[2],dizi[3],dizi[0]+dizi[1]+dizi[2]+dizi[3]);

*/

/*   /// BU KISIM ISTENILENI VERMIYOR.
     int i,toplam;
     int dizi[4];

for (i=0; i<4; i++)
{
    toplam=toplam+dizi[i];
    printf ("Lutfen %d. sayinizi giriniz. \n",i+1);
    scanf ("%d" ,&dizi[i-]);


}
printf ("%d" ,toplam);

*/

{
    int dizi[4];
    int i=0;
    int toplam=0;

       while (i<4)
       {
           printf ("Lutfen bir tam sayi giriniz. \n");
           scanf ("%d" ,&dizi[i]);
           i++;
       }

       for (i=0; i<4; i++)
       {
           toplam=toplam+dizi[i];                 // Action kodunun printf'den once olmasi kodu etkiliyor ve dogru calismasini sagliyor.
           printf ("\n %d \n" ,toplam);
       }
       printf ("\n Sayilarin Toplami = %d \n" ,toplam);


       /*for (i=0; i<4; i++)
       {
           toplam=toplam+dizi[i];                 // Action kodunun printf'den once olmasi kodu etkiliyor ve dogru calismasini sagliyor.
           printf ("\n %d + %d + %d + %d = %d \n" ,dizi[0],dizi[1],dizi[2],dizi[3],toplam);
       }*/


       /* for (i=0; i<4; i++)
       {
           toplam=toplam+dizi[i];                 // Action kodunun printf'den once olmasi kodu etkiliyor ve dogru calismasini sagliyor.
           printf ("\n %d = %d + %d \n" ,toplam,dizi[i],toplam);
       }*/
return 0;
}














