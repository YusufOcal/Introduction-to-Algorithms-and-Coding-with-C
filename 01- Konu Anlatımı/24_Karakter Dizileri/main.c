#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char ysf[]={'a','t','a','m','\0'}; // Bu sekýlde harf harf yazmak ýstersek en sona \0 'i kesinilikle koymalýyýz. Bu ifade karakterlerin bittigini soyler.

    char art[]={"atam"}; // Bu sekilde bellekte 4 hane kaplayacak gibi gozuksede bunun sonunda yine \0 ifadesi vardir. 5 hane yer kaplar.

    printf ("%s \n" ,art); // String (dizi) oldugu icin yazdýracagýmýz zaman %c yerine %s kullanýlýr.*/


    char klc[100]="";         // Eger karakter dizisine sadece atama yapýyorsak max yazabilecegi karakter sayisini girmeliyiz. Yoksa hata alýrýz.
    printf ("Lutfen karakter dizinizi giriniz. \n");
    scanf ("%s" ,&klc);
    printf ("Dogru mu yazdiniz %s" ,klc[100]);  // Eger kullanýcý space(bosluk) kullanýrsa dizinin bosluktan sonrasý ekrana bastýrýlmýyor.


    return 0;
}
