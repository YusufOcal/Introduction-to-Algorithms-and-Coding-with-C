#include <stdio.h>
#include <stdlib.h>

                /// BU DEGISKENE DEGER GONDERME YONTEMI ile YAPILISI, Bu yontemede RETURN etmek zorundayiz.
/*
int kare(int nal)
{
    int sonuc=nal*nal;
    return sonuc;     // Return ifadesini sonuca esitlemezisek islem cıkmayacaktır. (return sonuc;)!!!!!!!!!!!!!
}


int main()
{
    int x=4,karesi;
    karesi=kare(x);

    printf ("%d \n" ,karesi);

    return 0;
}
*/




void kare(int *sonuc ,int *nal)  // Asagidan yollanan adresi ( * ) ile yukarida tutuyoruz.  !!!!!!!
{                                // Asagidan yollanan adresi ( * ) ile yukarida tutuyoruz.  !!!!!!!
    sonuc=*nal**nal;             // Asagidan yollanan adresi ( * ) ile yukarida tutuyoruz.  !!!!!!!
}


int main()         /// x=nal oldu. , sonuc=sonucum oldu. , sonuc=4*4'den 16 oldu. , sonuc=sonucum oldugu icin ekranda 16 yazmýd olur.
{
    int x=4;
    int sonucum;

    kare(&sonucum ,&x);     // Ampersand (&&&) yukarýya adres yollamak icin kullanilir. Yukarida ise ( * ) ile tutulur.

    printf ("%d \n" ,sonucum);

    return 0;
}


