#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char ysf[]={'a','t','a','m','\0'}; // Bu sekılde harf harf yazmak ıstersek en sona \0 'i kesinilikle koymalıyız. Bu ifade karakterlerin bittigini soyler.

    char art[]={"atam"}; // Bu sekilde bellekte 4 hane kaplayacak gibi gozuksede bunun sonunda yine \0 ifadesi vardir. 5 hane yer kaplar.

    printf ("%s \n" ,art); // String (dizi) oldugu icin yazdıracagımız zaman %c yerine %s kullanılır.*/


    char klc[100]="";         // Eger karakter dizisine sadece atama yapıyorsak max yazabilecegi karakter sayisini girmeliyiz. Yoksa hata alırız.
    printf ("Lutfen karakter dizinizi giriniz. \n");
    scanf ("%s" ,&klc);
    printf ("Dogru mu yazdiniz %s" ,klc[100]);  // Eger kullanıcı space(bosluk) kullanırsa dizinin bosluktan sonrası ekrana bastırılmıyor.


    return 0;
}
