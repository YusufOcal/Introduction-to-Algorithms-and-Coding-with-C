#include <stdio.h>
#include <stdlib.h>

int main()
{                 /// Tek e�ittir ( = ) if d���nda kullan�l�r. �ift e�ittir ( == ) SADECE if ���NDE KULLANILIR.
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
