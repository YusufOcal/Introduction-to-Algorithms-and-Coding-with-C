#include <stdio.h>
#include <stdlib.h>
#define EK 0.08

int main()
{
    float sure,ucret;

    printf ("Lutfen dakika cinsinden konusma surenizi yaziniz. \n");
    scanf ("%f" ,&sure);

    if (sure<=3)
    {
        ucret = 0.25;

        printf ("Konusma sureniz = %.2f \n" ,sure);
        printf ("Ucretiniz = %.2f \n" ,ucret);
    }
    else
    {
        ucret = ( 0.25 + (sure-3)*EK );

        printf ("Konusma sureniz = %.2f \n" ,sure);
        printf ("Ucretiniz = %.3f \n" ,ucret);
    }

    return 0;
}
