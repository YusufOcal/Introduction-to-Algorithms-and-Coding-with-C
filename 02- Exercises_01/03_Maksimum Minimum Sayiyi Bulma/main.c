#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Karsilastirma yapacaginiz 1. sayiyi giriniz. \n");
    scanf ("%d" ,&a);

    printf("Karsilastirma yapacaginiz 2. sayiyi giriniz. \n");
    scanf ("%d" ,&b);

    printf("Karsilastirma yapacaginiz 3. sayiyi giriniz. \n");
    scanf ("%d" ,&c);

      if (a>=b)
      {
          if (a>=c)
          {
              if (b>=c)
              {
                  printf ("\n En buyuk sayi = %d \n" ,a);
                  printf ("\n En kucuk sayi = %d \n" ,c);
              }
              else
              {
                  printf ("\n En buyuk sayi = %d \n" ,a);
                  printf ("\n En kucuk sayi = %d \n" ,b);
              }
          }
          else
          {
            printf ("\n En buyuk sayim = %d \n" ,c);
            printf ("\n En kucuk sayim = %d \n" ,b);
          }
      }
      else
      {
          if (b>=c)
          {
              if (a>=c)
              {
                  printf ("\n En buyuk sayi = %d \n" ,b);
                  printf ("\n En kucuk sayi = %d \n" ,c);
              }
              else
              {
                  printf ("\n En buyuk sayi = %d \n" ,b);
                  printf ("\n En kucuk sayi = %d \n" ,a);
              }
          }
          else
          {
              printf ("\n En buyuk sayi = %d \n" ,c);
              printf ("\n En kucuk sayi = %d \n" ,a);
          }
      }

    return 0;
}
