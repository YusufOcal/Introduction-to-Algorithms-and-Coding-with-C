#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int ysf [5]={1,3,5,7,8}; /// Köþeli parantez icinde dizideki eleman sayilari yazilir. Süslü parantez icine ise dizideki elemanlar yazilir.
    printf ("%d \n" ,ysf[0]);   // [0] dizideki ilk elemandýr.
    printf ("%d \n" ,ysf[1]);   // [1] dizideki ikinci elemandýr.
    printf ("%d \n" ,ysf[2]);   // [2] dizideki ucuncu elemandýr.
    printf ("%d \n" ,ysf[3]);   // [3] dizideki dorduncu elemandýr.
    printf ("%d \n" ,ysf[4]);   // [3] dizideki dorduncu elemandýr.
    printf ("%d \n" ,ysf[5]);   // [xxx] dizide olmayan bir eleman sayisi bastirmaya calisirsak 0 yazacaktýr.
    printf ("%d \n" ,ysf[12]);  // [xxx] dizide olmayan bir eleman sayisi bastirmaya calisirsak 0 yazacaktýr.

    return 0;
}*/


{
    int ysf [10];
    int i;

    for (i=0 ;i<10 ;i++)
    {
        ysf [i] = i*2;
        printf ("%d \n" ,ysf[i]);
    }
}
