#include <stdio.h>
#include <stdlib.h>
#define tavhiz 0.038
#define kushiz 0.012

int main()
{
    float tavsan=1042;
    float kus=2272;
    int yil=0;

        while (tavsan<kus)
        {
            tavsan = tavsan + tavsan*tavhiz;  // tavsan+=tavsan*tavhiz;
            kus = kus + kus*kushiz;          // kus+=kus*kushiz;
            yil++;

            printf ("%d.yilda Tavsan sayisi = %.0f > Kus sayisi=%.0f olur. \n" ,yil,tavsan,kus);
        }

     printf ("\nTavsan sayisi kus sayisini %d. yilda gecer" ,yil);

    return 0;
}
