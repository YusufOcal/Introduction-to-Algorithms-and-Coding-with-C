#include <stdio.h>
#include <stdlib.h>

    /// NORMAL BASLANGIC DUZEYI YAPILMIS HALI

/*int main()
{                  /// NORMALDE BU SEKILDE YAZARIZ.
    int sayi;
    printf ("Lutfen bir sayi giriniz. \n");
    scanf("%d" ,&sayi);

       if (sayi%2==0)
       {
           printf ("Girilen sayi cifttir.");
       }
       else
       {
           printf ("Girilen sayi tektir.");
       }
    return 0;
}*/

         /// VOID'LI GERÝYE DONMESIZ

/*

                            // Fonksiyonu yazarken parantez icinde veri tipini (int) de yazmaliyiz.
void tekmiciftmi (int nal)  // void = geriye döndürmeyen fonksiyonlar icin kullanilir.
                            // Artýk nal degeri sayi int turundeki sayi degerine esit oldu. (int nal=int sayi);

{
       if (nal%2==0)    // Artik sayi yerinde nal yazmaliyiz. Cunku (int nal=int sayi); oldu.
       {
           printf ("Girilen sayi cifttir.");
       }
       else
       {
           printf ("Girilen sayi tektir.");
       }
}

int main ()

{
    int sayi;
    printf ("Lutfen bir sayi giriniz. \n");
    scanf("%d" ,&sayi);

    tekmiciftmi (sayi);  // Fonksiyonumuzu bu sekilde yazip int turundeki sayi degerine esitledik.

    return 0;
}
*/


      /// INT'LI GERIYE DONMELI


/*
int tekmiciftmi (int nal)  // int = geriye dönen fonksiyonlar icin kullanilir.
                            // Artýk nal degeri sayi int turundeki sayi degerine esit oldu. (int nal=int sayi);

{
       if (nal%2==0)    // Artik sayi yerinde nal yazmaliyiz. Cunku (int nal=int sayi); oldu.
       {
           return 1;    // Deger atadik gibi dusun. Bu satýr okunursa sonuc 1 olacaktir.
       }
       else
       {
           return 0;    // Deger atadik gibi dusun. Bu satir okunursa sonuc 2 olacaktir.
       }
}

int main ()

{
    int sayi,sonuc;
    printf ("Lutfen bir sayi giriniz. \n");
    scanf("%d" ,&sayi);

    sonuc=tekmiciftmi (sayi);  // Fonksiyonumuzu bu sekilde yazip int turundeki sayi degerine esitledik.

       if (sonuc==1)
       {
           printf ("Girilen sayi cifttir. \n");
       }
       if (sonuc==0)
       {
           printf ("Girilen sayi tektir. \n");
       }

    return 0;
}
*/
