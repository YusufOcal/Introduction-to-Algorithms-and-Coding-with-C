#include <stdio.h>
#include <stdlib.h>

int main()
{              /// G�R�LEN SAYILARIN TEK M� ��FT M� OLDU�UNU G�STEREN PROGRAM.
    int a;
    printf ("Lutfen a sayisini giriniz. \n");
    scanf ("%d" ,&a); // & Tirnak icinde kullanilmiyor.

    int b;
    printf ("Lutfen b sayisini giriniz. \n");
    scanf ("%d" ,&b);

      if (a%2 == 1)    // �f'ler dolu Else'ler bo� olmal�.
      {
          if (b%2 == 1)    // �f'ler dolu Else'ler bo� olmal�.
          {
              printf ("Girilen 2 sayi da tektir. \n");
          }

          else        // Son se�enek oldu�u i�in bir �ey yazmam�za gerek yok.
          {
              printf ("A sayisi tek, B sayisi cifttir");
          }
      }

      else           // Son se�enek oldu�u i�in bir �ey yazmam�za gerek yok.
      {
          if (b%2 == 0)      // �f'ler dolu Else'ler bo� olmal�.
          {
              printf ("Girilen 2 sayi da cifttir. \n");
          }

          else           // Son se�enek oldu�u i�in bir �ey yazmam�za gerek yok.
          {
              printf ("A sayisi cift, B sayisi tek sayidir. \n");
          }
      }
}


