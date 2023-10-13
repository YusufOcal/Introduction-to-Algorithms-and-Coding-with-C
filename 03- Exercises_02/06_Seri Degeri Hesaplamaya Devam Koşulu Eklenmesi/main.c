#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float x;
    float seri=0;
    char devam;

    do
    {
    printf("Lutfen bir n (sinirlayici) degeri giriniz. \n");
    scanf ("%d" ,&n);

    printf ("Lutfen bir x degeri giriniz, Islemden sonra devam edecekseniz (e) ya da (E) basin \n");
    scanf ("%f %c" ,&x,&devam);
                                 /// scanf bozuk oldugu icin on kýsma almam gerekti.
       for (i=0; i<=2*n-1; i++)
       {
           seri =seri + i/pow(x,i+1);
       }
       printf ("Pozitif tamsayi = %d \n" ,n);
       printf ("Reel sayi = %.2f \n" ,x);
       printf ("Seri = %.2f \n\n" ,seri);

    /* printf ("Islemden sonra devam edecekseniz (e) ya da (E) basin \n");
    scanf (%c" ,&devam);  DOGRUSU BU KISIMDA YAZILMALIYDI fakat scanf BOZUK */

    }while ( (devam=='e') || (devam=='E') );

  printf ("Gorusuruz:) \n");

return 0;
}
