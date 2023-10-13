#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,x,sonuc;                             /// printf ("Lutfen a,b,c,x degerini giriniz! \n");
                                                  /// scanf ("%d%d%d%d" ,&a,&b,&c,&x);
   printf ("Lutfen 'a' degerini giriniz! \n");
   scanf ("%d" ,&a);

   printf ("Lutfen 'b' degerini giriniz! \n");
   scanf ("%d" ,&b);

   printf ("Lutfen 'c' degerini giriniz! \n");
   scanf ("%d" ,&c);

   printf ("Lutfen 'x' degerini giriniz! \n");
   scanf ("%d" ,&x);

   sonuc=a*x*x+b*x+c;

   printf ("Sonuc = %d \n" ,sonuc);
   //printf ("%dx%d^2 + %dx%d + %d = %d" ,a,x,b,x,c,sonuc);

}
