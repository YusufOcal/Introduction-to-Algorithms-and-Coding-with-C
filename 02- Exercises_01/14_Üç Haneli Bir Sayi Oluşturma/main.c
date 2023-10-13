#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birler,onlar,yuzler,sayi;

    printf("Birler basamagi degerini giriniz. \n");
    scanf ("%d" ,&birler);

    printf("Onlar basamagi degerini giriniz. \n");
    scanf ("%d" ,&onlar);

    printf("Yuzler basamagi degerini giriniz. \n");
    scanf ("%d" ,&yuzler);

    sayi = ( (100*yuzler)+(10*onlar)+birler );

    printf ("Girdiginiz degerlere gore uretilen sayi %d 'dir" ,sayi);

    return 0;
}
