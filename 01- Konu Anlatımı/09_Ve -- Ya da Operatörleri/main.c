#include <stdio.h>
#include <stdlib.h>

int main()

   /// &&=VE ____ ||=YA DA ______ KULLANIMI
       /// ARALIK BELÝRLEMEK ÝÇÝN KULLANIRIZ
/*{
    int yas;
    printf ("Lutfen yasinizi giriniz. \n");
    scanf ("%d",&yas);

      if ( (yas>30) && (yas<60) )
      {
        printf ("Yolun yarisi gitmis");
      }
      else
      {
        printf("Daha yas genc masallah");                     /// 2'li kullanacaksak sýrasý ile if -- else kullanýlýr.
      }                                             /// 3'lü kullanacaksak sýrasý ile if -- else if -- else kullanýlýr.
                                                        /// 4'lü kullanacaksak sýrasý ile if -- else if -- else if -- else kullanýlýr.
                                                         /// 5'li kullanacaksak sýrasý ile if -- else if -- else if -- else if -- else kullanýlýr.
                                                                          // BU ÞEKÝLDE KULLANILIR.

    return 0;  // VE KULLANIMI
}*/


{
    int yas;
    printf ("Lutfen yasinizi giriniz. \n");
    scanf ("%d", &yas);

    int ugurlu_sayi;
    printf("Lutfen ugurlu sayinizi giriniz. \n");
    scanf ("%d", &ugurlu_sayi);

      if ( ((yas>30) && (yas<60)) || (ugurlu_sayi<42) )  //VE -- YA DA KISIMLARINA DÝKKAT KARIÞIK OLABÝLÝYOR. Ýkisinden biri doðru ise alt satýr yazdýrýlýr.
       {                                                 // Eþittir ifadesini ( == ) 2 tane kullanmayý unutmayýn.
        printf ("Yolun yarisi gitmis \n");
       }
      else
        {
         printf("Daha yas genc masallah \n");            /// 2'li kullanacaksak sýrasý ile if -- else kullanýlýr.
        }                                            /// 3'lü kullanacaksak sýrasý ile if -- else if -- else kullanýlýr.
                                                     /// 4'lü kullanacaksak sýrasý ile if -- else if -- else if -- else kullanýlýr.
                                                    /// 5'li kullanacaksak sýrasý ile if -- else if -- else if -- else if -- else kullanýlýr.
                                                                       // BU ÞEKÝLDE KULLANILIR.
    return 0;
}
