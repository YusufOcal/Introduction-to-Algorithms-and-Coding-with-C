#include <stdio.h>
#include <stdlib.h>

int main()  /// AMPERSAND (&&&) AMPERSAND (&&&) AMPERSAND (&&&)
{
    char islem;
    float a,b,sonuc;
    printf("Lutfen yapacaginiz islem turunu giriniz. [+,-,*,/] \n");
    scanf ("%c" ,&islem);

       switch (islem)
       {
           case '+' : printf ("Lutfen ilk sayinizi giriniz. \n");  /// Char veri tipi oldugu icin yazarken TEK TIRNAK kullanilir.
                     scanf ("%f" ,&a);
                     printf ("Lutfen ikinci sayinizi giriniz. \n");
                     scanf ("%f" ,&b);
                                       /* float a,b;
                                          2 ve dahah fazla tek satýr kod ile almak istersek su sekilde yazýlýr.
                                            scanf ("%f%f" ,&a,&b) Þeklinde kullanýcýdan alabiliriz.  */
                     sonuc=a+b;
                     printf ("%.2f + %.2f = %.2f" ,a,b,sonuc);

                             /* Ya da printf ("%.2f / %.2f = %.2f" ,a,b,a+b);
                            Þeklinde de yazsak yine ayný sey olurdu hatta fazla satýrlardan kurtulurduk.*/
          break;


          case '-' : printf ("Lutfen ilk sayiyi giriniz. \n");
                     scanf ("%f" ,&a);
                     printf ("Lutfen ikinci sayiyi giriniz. \n");
                     scanf ("%f" ,&b);
                                             /* float a,b;
                                          2 ve dahah fazla tek satýr kod ile almak istersek su sekilde yazýlýr.
                                            scanf ("%f%f" ,&a,&b) Þeklinde kullanýcýdan alabiliriz.  */
                     sonuc=a-b;
                     printf ("%.2f - %.2f = %.2f" ,a,b,sonuc);

                             /* Ya da printf ("%.2f / %.2f = %.2f" ,a,b,a-b);
                            Þeklinde de yazsak yine ayný sey olurdu hatta fazla satýrlardan kurtulurduk.*/
          break;


          case '*' : printf ("Lutfen ilk sayiyi giriniz. \n");
                     scanf ("%f" ,&a);
                     printf ("Lutfen ikinci sayiyi giriniz. \n");
                     scanf ("%f" ,&b);
                                                /* float a,b;
                                          2 ve dahah fazla tek satýr kod ile almak istersek su sekilde yazýlýr.
                                            scanf ("%f%f" ,&a,&b) Þeklinde kullanýcýdan alabiliriz.  */
                     sonuc=a*b;
                     printf ("%.2f * %.2f = %.2f" ,a,b,sonuc);

                            /* Ya da printf ("%.2f / %.2f = %.2f" ,a,b,a*b);
                            Þeklinde de yazsak yine ayný sey olurdu hatta fazla satýrlardan kurtulurduk.*/
          break;


          case '/' : printf ("Lutfen ilk sayiyi giriniz. \n");
                     scanf ("%f" ,&a);
                     printf ("Lutfen ikinci sayiyi giriniz. \n");
                     scanf ("%f" ,&b);
                                              /* float a,b;
                                          2 ve dahah fazla tek satýr kod ile almak istersek su sekilde yazýlýr.
                                            scanf ("%f%f" ,&a,&b) Þeklinde kullanýcýdan alabiliriz.  */
                     sonuc=a/b;
                     printf ("%.2f / %.2f = %.2f" ,a,b,sonuc);

                        /* Ya da printf ("%.2f / %.2f = %.2f" ,a,b,a/b);
                            Þeklinde de yazsak yine ayný sey olurdu hatta fazla satýrlardan kurtulurduk.*/
          break;


          default : printf ("Boyle bir islem turu yapamiyoruz!");
          break;
       }

    return 0;
}


















