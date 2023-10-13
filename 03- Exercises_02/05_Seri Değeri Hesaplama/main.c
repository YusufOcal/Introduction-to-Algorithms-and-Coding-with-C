#include <stdio.h>
#include <stdlib.h>

int main()                      /// GUZEL BIR FOR DONGUSU ORNEGI
{
    int i,n;
    float seri=0;
    float x;

    printf("Bir n (sinirlayici) degeri giriniz. \n");
    scanf ("%d" ,&n);

    printf("Bir x degeri giriniz. \n");
    scanf ("%f" ,&x);

       for (i=1; i<=2*n-1; i++)
       {
           seri = seri + i/pow(x,i+1) ;
       }

    printf ("Pozitif tamsayi = %d \n" ,n);
    printf ("Reel sayi = %.2f \n" ,x);
    printf ("Seri = %.2f" ,seri);

    return 0;
}
