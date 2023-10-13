#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int a,b;

    printf ("Lutfen 1. sayiyi giriniz. \n");
    scanf ("%d" ,&a);

    printf ("Lutfen 2. sayiyi giriniz. \n");
    scanf ("%d" ,&b);

       if (a*b<0)
       {
           printf (">> sign(%d * %d) = -1 \n" ,a,b);
       }
       else if (a*b>0)
       {
           printf (">> sign(%d * %d) = +1 \n" ,a,b);
       }
       else
       {
           printf (">> sign(%d * %d) = 0 \n" ,a,b);
       } */


{
    int a,b;

    printf ("Lutfen 1. sayiyi giriniz. \n");
    scanf ("%d" ,&a);

    printf ("Lutfen 2. sayiyi giriniz. \n");
    scanf ("%d" ,&b);

       if ( (a>0 && b>0) || (a<0 && b<0) )
       {
           printf (">> sign(%d * %d) = +1 \n" ,a,b);
       }
       else if (a==0 || b==0)
       {
           printf (">> sign(%d * %d) = 0 \n" ,a,b);
       }
       else
       {
           printf (">> sign(%d * %d) = -1 \n" ,a,b);
       }

    return 0;
}
