#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cok[2][3]={{4,7,8},{6,3,9}};
    // Seklinde yazýlýr. [2][3] dizideki eleman sayilerini temsil eder. ' tane kumem var her kume icinde de 3 tane eleman seklinde dusunulebilir.

    printf("%d" ,cok[0][0]);  // Dizinin ilk elemeanini ekrana yazdirir. Kume 1'den eleman 1'i alýyoruz.
    printf("%d" ,cok[0][1]);  // Kume 1'den eleman 2'yi alýyoruz.
    printf("%d" ,cok[0][2]);  // Kume 1'den eleman 3'u alýyoruz.

    printf("%d" ,cok[1][0]);  // Kume 2'den eleman 1'i alýyoruz.
    printf("%d" ,cok[1][1]);  // Kume 2'den eleman 2'yi alýyoruz.
    printf("%d" ,cok[1][2]);  // Kume 2'den eleman 3'u alýyoruz.

        /// O ILK ELEMANLARA KARSILIK GELIYOR, 1'DEN BASLAMIYORUZ.
    return 0;
}
