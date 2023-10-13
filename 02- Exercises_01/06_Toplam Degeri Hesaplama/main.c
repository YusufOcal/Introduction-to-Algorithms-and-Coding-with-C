#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int j=1;
    int toplam=0;

    printf ("Bir sayi giriniz. \n");
    scanf ("%d" ,&a);

      while (j<=a)
      {
             if (a==j)
             {
                 printf ("%d" ,a);
             }
             else
             {
                 printf ("%d + " ,j);
             }
             toplam=toplam+j;
             j++;
      }

      printf (" = %d" ,toplam);

    return 0;
}
