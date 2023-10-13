#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf ("Ilk sayinizi giriniz. \n");
    scanf ("%d" ,&a);

    printf ("Ikinci sayinizi giriniz. \n");
    scanf ("%d" ,&b);

       if (a!=b)
       {
           if (a>b)
           {
               printf ("%d sayisi %d sayisinden buyuktur. \n" ,a,b);
           }
           else
           {
               printf ("%d sayisi %d sayisindan kucuktur. \n" ,a,b);
           }
       }
       else
       {
           if (a%b==0)
           {
              printf ("Iki sayi birbirinin katlaridir. \n");
           }
       }


    return 0;
}
