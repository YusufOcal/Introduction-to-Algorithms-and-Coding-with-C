#include <stdio.h>
#include <stdlib.h>

/*
int ustunu_al (int x ,int y)   // ustsonuc=ustunu_al oldu.
   {
       int i, ustsonuc=1;  // ustsonuc=1, Cunku carpma isleminin etkisiz elemani 1'dir.

          for (i=0; i<y; i++)
          {
              ustsonuc=ustsonuc*x;
          }
        return ustsonuc;  /// !!!!!!!!!!!! Bunu yapmak zorundayiz cunku geriye donen (int ustunu_al (int x ,int y)) bir fonksiyon yazdýk.
   }


int main()
{
    int alt=4;
    int ust=5;
    int sonuc;

    sonuc=ustunu_al(alt ,ust);  // ustunu_al=sonuc zaten.

    printf ("%d" ,sonuc);

    return 0;
}
*/


                   /// ADRESLE GONDERME ISLEMINDE RETURN KULLANMIYORUZ.

/*
void ustunu_al (int x ,int y ,int *sonuc)
   {
          int i;
          *sonuc=1;          ///!!!!!! Dikkat *sonuca ilk degerini vermeliyiz. Carpmada 1 etkisiz elemandir.
          for (i=0; i<y; i++)
          {
              *sonuc=*sonuc*x;  // *sonuc=1024 oldu.
          }
   }


int main()
{
    int alt=4;
    int ust=5;
    int sonuc;

    ustunu_al(alt ,ust ,&sonuc);

    printf ("%d" ,sonuc);

    return 0;
}
*/




void ustunu_al (int *x ,int *y ,int *sonuc) // Asagidan gelen adresleri burada (*) ile tuttum ve kullandim. (*) YILDIZLAR SABIT KALIYOR HER ZAMAN
   {
          int i;
          *sonuc=1;          ///!!!!!! Dikkat *sonuca ilk degerini vermeliyiz. Carpmada 1 etkisiz elemandir.
          for (i=0; i<*y; i++)
          {
              *sonuc=*sonuc**x;  // *sonuc=1024 oldu.
          }
   }


int main()
{
    int alt=4;
    int ust=5;
    int sonuc;

    ustunu_al(&alt ,&ust ,&sonuc); // Yukaridan farklý kisimlari alt ve ust degiskenlerine de adres(&) gonderme ekledim. Yukariya bak

    printf ("%d" ,sonuc);

    return 0;
}
