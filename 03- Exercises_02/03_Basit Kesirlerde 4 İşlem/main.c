#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b,pay,payda;

    printf ("Lutfen yapacaginiz islem turunu seciniz. \n");
    scanf ("%c" ,&op);

    if (op=='+')
    {
        printf ("Lutfen islem yapacaginiz 1. sayiyi giriniz. \n");
        scanf ("%d" ,&a);

        printf ("Lutfen islem yapacaginiz 2. sayiyi giriniz. \n");
        scanf ("%d" ,&b);

        if ( (a==0) || (b==0) )
           {
               printf ("0 islemi tanimsiz yapmaktadir.");
           }


           else
           {
               pay = a+b;
               payda = a*b;

               printf ("1/%d + 1/%d = %d/%d" ,a,b,pay,payda);
           }
    }
    else if (op=='-')
    {
        printf ("Lutfen islem yapacaginiz 1. sayiyi giriniz. \n");
        scanf ("%d" ,&a);

        printf ("Lutfen islem yapacaginiz 2. sayiyi giriniz. \n");
        scanf ("%d" ,&b);

           if ( (a==0) || (b==0) )
           {
               printf ("0 islemi tanimsiz yapmaktadir.");
           }


           else
           {
               pay = a-b;
               payda = a*b;

               printf ("1/%d + 1/%d = %d/%d" ,a,b,pay,payda);
           }
    }
    else
    {
        printf ("Yanlis bir operator girdiniz. \n");
    }

    return 0;
}
