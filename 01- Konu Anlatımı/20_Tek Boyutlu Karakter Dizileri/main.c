#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int ysf [5]={1,3,5,7,8}; /// K��eli parantez icinde dizideki eleman sayilari yazilir. S�sl� parantez icine ise dizideki elemanlar yazilir.
    printf ("%d \n" ,ysf[0]);   // [0] dizideki ilk elemand�r.
    printf ("%d \n" ,ysf[1]);   // [1] dizideki ikinci elemand�r.
    printf ("%d \n" ,ysf[2]);   // [2] dizideki ucuncu elemand�r.
    printf ("%d \n" ,ysf[3]);   // [3] dizideki dorduncu elemand�r.
    printf ("%d \n" ,ysf[4]);   // [3] dizideki dorduncu elemand�r.
    printf ("%d \n" ,ysf[5]);   // [xxx] dizide olmayan bir eleman sayisi bastirmaya calisirsak 0 yazacakt�r.
    printf ("%d \n" ,ysf[12]);  // [xxx] dizide olmayan bir eleman sayisi bastirmaya calisirsak 0 yazacakt�r.

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
