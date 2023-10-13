#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int a=5;
      if(a>5)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda hiçbir þey yazmayazcaktýr. Çünkü a deðeri 5'ten büyük deðil.
}*/


/*{
    int a=5;
      if(a>0)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda 5 yazacaktýr.
}*/


/*{
    int a=5;
      if((a%2)==1)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda 5 yazacaktýr. Çünkü 5'in 2 ile bölümünden kalan 1'dir.
}*/


/*{
    int a=5;
      if((a%5)==1)
    {
        printf("%d \n",a);
    }
    return 0;        // Ekranda bir þey yazmayacaktýr. Çünkü 5'in 5 ile bölümünden kalan 0'dýr.
}*/


/*{
    int a=7;
    int b=7;
      if (a==b)
    {
        printf("A sayisi B'ye esittir \n");
    }
    return 0;        // Ekranda A sayisi B'ye esittir yazacaktýr. Çünkü a=b 'dir.
}*/


/*{
    int a=7;
    int b=5;
      if (a!=b)    /// Ünlemin (!) yeri eþittirin (=) saðýnda olursa fonksiyon çalýþmaz.
    {
        printf("A sayisi B'ye esit degildir \n");
    }
    return 0;        // Ekranda A sayisi B'ye esit degildir yazacaktýr. Çünkü a!=b 'dir.
}*/



    /// EN ÖENMLÝ KISIM = GÝRÝLENSAYININ NEGATÝF-POZÝTÝF-0'A EÞÝT OLDUÐUNU GÖSTEREN PROGRAM
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

    return 0;     /* if - else if - else ___ Sýralamasý bizim için çok önemli SIRALAMA DA HATA OLURSA KOD ÝÞLEMEYECEKTÝR.
                     Sondaki else ifadesinde bir þey yazýlmamalý, çünkü son fonksiyon olduðu için. */
}














