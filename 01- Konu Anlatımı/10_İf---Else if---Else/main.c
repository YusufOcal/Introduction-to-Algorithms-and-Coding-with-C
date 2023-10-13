#include <stdio.h>
#include <stdlib.h>

int main()
{                 /// Tek eþittir ( = ) if dýþýnda kullanýlýr. Çift eþittir ( == ) SADECE if ÝÇÝNDE KULLANILIR.
    int a=12;

      if(a==3)
      {
          printf("A sayisi 3'tur. \n");
      }

      else if (a==5)
      {
          printf("A sayisi 5'tir \n");
      }

      else if (a==11)
      {
          printf("A sayisi 11'dir. \n");
      }

      else if (a==12)
      {
          printf("A sayisi 12'dir. \n");
      }

      else
      {
          printf("A sayisi bulunamadi. \n");
      }
}
