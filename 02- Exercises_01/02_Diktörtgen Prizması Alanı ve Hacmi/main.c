#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h,tabanA,yanalA,toplamA,hacim;

   printf ("Taban kenarlarindan a degerini giriniz. \n");
   scanf ("%d" ,&a);

   printf ("Taban kenarlarindan b degerini giriniz. \n");
   scanf ("%d" ,&b);

   printf ("Taban kenarlarindan h degerini giriniz. \n");
   scanf ("%d" ,&h);
                                   // Baska degiskenler ile ugrasmadan direkt bu sekilde yazabilirdik.
     tabanA=a*b;                   // printf ("Taban alani = %d \n" ,a*b);
     yanalA=2*h*(a+b);             // printf ("Yanal Alani = %d \n" ,2*h*(a+b));
     toplamA=2*a*b + 2*h*(a + b);  // printf ("Yanal Alani = %d \n" ,2*a*b + 2*h*(a + b));
     hacim=a*b*h;                  // printf ("Yanal Alani = %d \n" ,a*b*h);

   printf ("Taban Alani = %d \n" ,tabanA);
   printf ("Yanal Alani = %d \n" ,yanalA);
   printf ("Toplam Alani = %d \n" ,toplamA);
   printf ("Hacim = %d \n" ,hacim);

   return 0;
}
