#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,sonuc;

    printf ("Bir sayi giriniz. \n");
    scanf ("%f" ,&x);

    sonuc=x*x*x + 13*x*x + 47*x +5;

    printf (">> f(%.3f) = %.3f \n" ,x,sonuc);

    return 0;
}
