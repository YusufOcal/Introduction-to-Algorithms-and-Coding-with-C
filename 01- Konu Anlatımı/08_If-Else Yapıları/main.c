#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int a=5;
      if(a>5)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda hi�bir �ey yazmayazcakt�r. ��nk� a de�eri 5'ten b�y�k de�il.
}*/


/*{
    int a=5;
      if(a>0)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda 5 yazacakt�r.
}*/


/*{
    int a=5;
      if((a%2)==1)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda 5 yazacakt�r. ��nk� 5'in 2 ile b�l�m�nden kalan 1'dir.
}*/


/*{
    int a=5;
      if((a%5)==1)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda bir �ey yazmayacakt�r. ��nk� 5'in 5 ile b�l�m�nden kalan 0'd�r.
}*/


/*{
    int a=7;
    int b=7;
      if (a==b)
    {
        printf("A sayisi B'ye esittir \n");
    }
    return 0;        // Ekranda A sayisi B'ye esittir yazacakt�r. ��nk� a=b 'dir.
}*/


/*{
    int a=7;
    int b=5;
      if (a!=b)    /// �nlemin (!) yeri e�ittirin (=) sa��nda olursa fonksiyon �al��maz.
    {
        printf("A sayisi B'ye esit degildir \n");
    }
    return 0;        // Ekranda A sayisi B'ye esit degildir yazacakt�r. ��nk� a!=b 'dir.
}*/



    /// EN �ENML� KISIM = G�R�LENSAYININ NEGAT�F-POZ�T�F-0'A E��T OLDU�UNU G�STEREN PROGRAM
{
    int a;
    printf ("Lutfen bir sayi giriniz. \n");
    scanf ("%d",&a);

      if (a==0)
      {
          printf("Girilen sayi 0'a esittir. \n");
      }

      else if (a>0)
      {
          printf("Girilen sayi pozitiftir. \n");
      }

      else
      {
          printf("Girilen sayi negatiftir. \n");
      }

    return 0;     /* if - else if - else ___ S�ralamas� bizim i�in �ok �nemli SIRALAMA DA HATA OLURSA KOD ��LEMEYECEKT�R.
                     Sondaki else ifadesinde bir �ey yaz�lmamal�, ��nk� son fonksiyon oldu�u i�in. */
}














