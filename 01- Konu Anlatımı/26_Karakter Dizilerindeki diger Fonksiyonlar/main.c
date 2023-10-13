#include <stdio.h>
#include <stdlib.h>
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <string.h> // BU KARAKTER DÝZÝLERÝNÝN DÝGER ORNEKLERÝNÝ KULLANMAK ÝCÝN BU KUTUPHANEYÝ EKLEMELIYIZ.
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()
/*{                                          /// STRELEN (x);  KODU
    char nal[]="Ataturk";

    printf ("Karakter dizisinin boyu %d \n" ,strlen(nal));  //strelen() seklinde kullanýlýyor ve sondaki \0'ý saymýyor.
    printf ("Karakter dizisinin boyu %d \n" ,sizeof(nal));  // sizeof() seklinde kullanýlýr ve sondaki \0'da sayarak ekrana bastýrýr.


    return 0;
}*/


/*{                                           /// STRCMP (x,y);  KODU
    int buyukluk;
    char nal[12]="abcde";
    char nalli[12]="ABCDE";

    buyukluk=strcmp(nal,nalli); // YAZILAN 2 DÝZÝ ARASINDA ASCI KODLARINA GORE KARSILASTIRMA YAPAR. Eger buyukse 1, kucukse -1 yazar.
    printf ("%d \n" ,buyukluk);  // (ASCI gore) nal>nallý oldugu ýcýn ekranda 1 yazar.


    int buyukluk;
    char nal[12]="ABCDE";
    char nalli[12]="abcde";

    buyukluk=strcmp(nal,nalli); // YAZILAN 2 DÝZÝ ARASINDA ASCI KODLARINA GORE KARSILASTIRMA YAPAR. Eger buyukse 1, kucukse -1 yazar.
    printf ("%d \n" ,buyukluk);  // (ASCI gore) nal<nallý oldugu ýcýn ekranda -1 yazar.



    int buyukluk;
    char nal[12]="ABCDE";
    char nalli[12]="abcde";

    buyukluk=strcmp(nal,nalli); // YAZILAN 2 DÝZÝ ARASINDA ASCI KODLARINA GORE KARSILASTIRMA YAPAR. Eger buyukse 1, kucukse -1 yazar.

    if (buyukluk<0)
    {
        printf ("Sonuc = %d'dir. nal<nalli 'dir." ,buyukluk);
    }
    else if (buyukluk>0)
    {
        printf ("Sonuc = %d'dir. nal>nalli 'dir." ,buyukluk);
    }
    else
    {
        printf("Sonuc = %d'dir. nal=nalli 'dir." ,buyukluk);
    }

    return 0;
} */



/*{                                           /// SRTNCMP (x,y,sayi);  KODU  !!!
    int buyukluk;
    char nal[12]="abcde";
    char nalli[12]="ABCDE";

    buyukluk=strncmp(nal,nalli,4); /// Karsýlastýrýlacak basamak sayýsýný parantezin en sonuna yazýlýr.
    // YAZILAN 2 DÝZÝ ARASINDA ilk 4 hanenin (ASCI) KODLARINA GORE KARSILASTIRMASINI YAPAR. Eger buyukse 1, kucukse -1 yazar.
    printf ("%d \n" ,buyukluk);
    return 0;
}*/




/*{                                         /// STRCPY (x,y); KODU
    char nal[]="Benim adim cam agaci";
    char nalli[81];


    strcpy (nalli,nal); // C'de sað taraftaki degerler sol taraftaki degerlere esitlenilir. nal'daki degerler nalli'ya aktarilir.
    printf ("%s" ,nalli); // Ekranda   Benim adim cam agaci   yazar.

    return 0;
}*/



/*{                                            /// STRNCPY (x,y,sayi); KODU !!!
    char nal[]="Benim adim cam agaci";
    char nalli[81]=""; /// C dilinin BUGlarýndan biri kodun duzgun calýsmasý icin bos da olsa bir karakter atamalýyýz.
    // Bosluk(space)'de karakter olarak sayýlýyor ve ona gore tasýma yapýyor.

    strncpy (nalli,nal,9); // C'de sað taraftaki degerler sol taraftaki degerlere esitlenilir. nal'daki degerler nalli'ya aktarilir.
    /// Kopyalanmasýný istedigimiz basamak sayýsýný parantezin en sonunda belirtiriz.
    printf ("%s" ,nalli); // Ekranda   Benim adim cam agaci   yazar.

    return 0;
}*/



/*{                                        /// STRCAT (x,"zzzzzz"); || STRCAT(x,y); KODU
    char nal[]="Benim adim - ";

    strcat (nal,"CAM AGACI");
    // STTCAT 2 farklı diziyi birlestirmemizi sagliyor. Parantez icinde biraktigimiz bosluklar dizilere dahil oluyor.
    printf ("%s" ,nal);



    char nal[81];    // Dizinin kac hane [81] alacagini soylemezsek kod calısmaz.

    strcpy (nal,"Ali babanin bir");

    strcat (nal," ciftligi var.");     // Birden fazla STRCAT kodu kullanbiliriz. Ama birden fazla STRCPY kullanisli degil.
    strcat (nal," CITLIGINDE INEKLERI VAR.");
    // STTCAT 2 farklı diziyi birlestirmemizi sagliyor. Parantez icinde biraktigimiz bosluklar dizilere dahil oluyor.

    printf ("%s" ,nal);

    return 0;
}*/




/*{                                            /// STRNCAT (x,y,sayi); KODU
    char nal[100];
    char nalli[100];

    printf ("Istedigin bir sey yaz. \n");
    gets (nal);                        /// GETS () kodu aradaki boslukları(space) da alıyor. Fakat SCANF aradaki boslukları almaz.

    printf("Eklemek istedigin bir sey varsa yaz. (Sadece 10 karakter hakkin var.) \n");
    gets (nalli);                     /// GETS () kodu aradaki boslukları(space) da alıyor. Fakat SCANF aradaki boslukları almaz.

    strncat (nal,nalli,10);
    printf ("%s" ,nal);

    return 0;
}*/









