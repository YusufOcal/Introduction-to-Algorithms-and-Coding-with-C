#include <stdio.h>
#include <stdlib.h>

/* int main()
{
    int sayi,birler,onlar,yuzler;

    printf("Lutfen uc bamakli bir sayi giriniz. \n");
    scanf ("%d" ,&sayi);

    birler = ( (sayi%100)%10 );  // Bunun yerine ( birler%10 ) da yazilabilir.
    onlar = ( (sayi%100)/10 );
    yuzler = (sayi/100);

    printf ("Yuzler basamagi = %d \n" ,yuzler);
    printf ("Onlar basamagi = %d \n" ,onlar);
    printf ("Birler basamagi = %d \n" ,birler);

    return 0;
} */

int main()
{
    int sayi,birler,onlar,yuzler,binler;

    printf("Lutfen dort bamakli bir sayi giriniz. \n");
    scanf ("%d" ,&sayi);

    birler = (sayi%10);  // Bunun yerine ( birler%10 ) da yazilabilir.
    onlar = ( (sayi%100)/10 );
    yuzler = ( (sayi%1000)/100 );
    binler = (sayi/1000);

    printf ("Binler basamagi = %d \n" ,binler);
    printf ("Yuzler basamagi = %d \n" ,yuzler);
    printf ("Onlar basamagi = %d \n" ,onlar);
    printf ("Birler basamagi = %d \n" ,birler);

    return 0;
}
