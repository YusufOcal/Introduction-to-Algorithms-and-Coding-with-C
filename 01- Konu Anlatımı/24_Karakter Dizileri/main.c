#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char ysf[]={'a','t','a','m','\0'}; // Bu sek�lde harf harf yazmak �stersek en sona \0 'i kesinilikle koymal�y�z. Bu ifade karakterlerin bittigini soyler.

    char art[]={"atam"}; // Bu sekilde bellekte 4 hane kaplayacak gibi gozuksede bunun sonunda yine \0 ifadesi vardir. 5 hane yer kaplar.

    printf ("%s \n" ,art); // String (dizi) oldugu icin yazd�racag�m�z zaman %c yerine %s kullan�l�r.*/


    char klc[100]="";         // Eger karakter dizisine sadece atama yap�yorsak max yazabilecegi karakter sayisini girmeliyiz. Yoksa hata al�r�z.
    printf ("Lutfen karakter dizinizi giriniz. \n");
    scanf ("%s" ,&klc);
    printf ("Dogru mu yazdiniz %s" ,klc[100]);  // Eger kullan�c� space(bosluk) kullan�rsa dizinin bosluktan sonras� ekrana bast�r�lm�yor.


    return 0;
}
