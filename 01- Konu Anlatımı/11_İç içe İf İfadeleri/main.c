#include <stdio.h>
#include <stdlib.h>

int main()
{              /// GÝRÝLEN SAYILARIN TEK MÝ ÇÝFT MÝ OLDUÐUNU GÖSTEREN PROGRAM.
    int a;
    printf ("Lutfen a sayisini giriniz. \n");
    scanf ("%d" ,&a); // & Tirnak icinde kullanilmiyor.

    int b;
    printf ("Lutfen b sayisini giriniz. \n");
    scanf ("%d" ,&b);

      if (a%2 == 1)    // Ýf'ler dolu Else'ler boþ olmalý.
      {
          if (b%2 == 1)    // Ýf'ler dolu Else'ler boþ olmalý.
          {
              printf ("Girilen 2 sayi da tektir. \n");
          }

          else        // Son seçenek olduðu için bir þey yazmamýza gerek yok.
          {
              printf ("A sayisi tek, B sayisi cifttir");
          }
      }

      else           // Son seçenek olduðu için bir þey yazmamýza gerek yok.
      {
          if (b%2 == 0)      // Ýf'ler dolu Else'ler boþ olmalý.
          {
              printf ("Girilen 2 sayi da cifttir. \n");
          }

          else           // Son seçenek olduðu için bir þey yazmamýza gerek yok.
          {
              printf ("A sayisi cift, B sayisi tek sayidir. \n");
          }
      }
}


