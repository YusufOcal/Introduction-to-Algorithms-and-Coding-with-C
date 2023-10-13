#include <stdio.h>
#include <stdlib.h>

int main() {


    int day=3; // day=hangi gun yazmasýný istiyorsan onu yazýyorsun. 1-7 arasý bir sayi girersen default kodu calisacaktir.

    switch (day) //switch parantez içine degiþkenin ismi yazilir.
    {
        case 1: printf ("Pazartesi \n");  /// case'den sonra IKI NOKTA ust uste kullanmaliyiz. Sonrasýnda action kodumuzu yazariz.
        break;         // Caseler'den sonra donguyu kirmak icin break kodunu yazmaliyiz. Aksi takdirde diger case'lere gecemeyiz.

        case 2: printf ("Sali \n");   // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        case 3: printf ("Carsamba \n");  // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        case 4: printf ("Persembe \n");  // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        case 5: printf ("Cuma \n");  // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        case 6: printf ("Cumartesi \n");  // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        case 7: printf("Pazar \n");  // Case'de sayi kullandigimiz zaman TEK TIRNAK kullanmıyacagız. Karekterler icin TEK TIRNAK kullanılır.
        break;

        default : printf("Boyle bir gun yok. \n");
        break;    // Just in case olsun diye break yazdik.
        /// Default kodu else'e benzer, Yukarisindaki case'lerden hicbirine girmez ise Default kodu calisacaktir.
    }


    /* {
     int day=2;

       if (day==1)
       {
           printf ("Pazartesi \n");
       }
       else if (day==2)
       {
           printf ("Sali \n");
       }
       else if (day==3)
       {
           printf ("Carsamba \n");
       }
       else if (day==4)
       {
           printf ("Persembe \n");
       }
       else if (day==5)
        {
            printf ("Cuma \n");
        }
        else if (day==6)
        {
            printf ("Cumartesi \n");
        }
        else if (day==7)
        {
            printf ("Pazar \n");
        }
        else
        {
            printf ("Boyle bir gun yok! \n");
        } */


/*
int day;
printf ("Lutfen gune tekabul eden sayinizi giriniz. [1,7] olmalidir. \n");
scanf ("%d", &day); // & Tirnak icinde kullanilmiyor.

    if (day==1)
       {
           printf ("Pazartesi \n");
       }
       else if (day==2)
       {
           printf ("Sali \n");
       }
       else if (day==3)
       {
           printf ("Carsamba \n");
       }
       else if (day==4)
       {
           printf ("Persembe \n");
       }
       else if (day==5)
        {
            printf ("Cuma \n");
        }
        else if (day==6)
        {
            printf ("Cumartesi \n");
        }
        else if (day==7)
        {
            printf ("Pazar \n");
        }
        else
        {
            printf ("Boyle bir gun yok! \n");
        } */


/*
    int gun;
    printf ("Lutfen gune tekabul eden sayinizi giriniz. ( [1-7] arasi olmalidir. ) \n");
    scanf ("%d" ,&gun);  // & Tirnak icinde kullanilmiyor.

    switch (gun) //switch parantez içine degiþkenin ismi yazilir.
    {
        case 1: printf ("Pazartesi \n");  /// case'den sonra IKI NOKTA ust uste kullanmaliyiz. Sonrasýnda action kodumuzu yazarýz.
        break;         // Caseler'den sonra donguyu kirmak icin break kodunu yazmaliyiz. Aksi takdirde diger case'lere gecemeyiz.

        case 2: printf ("Sali \n");
        break;

        case 3: printf ("Carsamba \n");
        break;

        case 4: printf ("Persembe \n");
        break;

        case 5: printf ("Cuma \n");
        break;

        case 6: printf ("Cumartesi \n");
        break;

        case 7: printf("Pazar \n");
        break;

        default : printf("Boyle bir gun yok. \n");  /// Default kodu else'e benzer, Yukarisindaki case'lerden hicbirine girmez ise Default kodu calisacaktir.
        break;    // Just in case olsun diye break yazdik.
    }
*/
    return 0;
}






