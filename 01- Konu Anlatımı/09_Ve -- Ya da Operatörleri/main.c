#include <stdio.h>
#include <stdlib.h>

int main()

   /// &&=VE ____ ||=YA DA ______ KULLANIMI
       /// ARALIK BEL�RLEMEK ���N KULLANIRIZ
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
        printf("Daha yas genc masallah");                     /// 2'li kullanacaksak s�ras� ile if -- else kullan�l�r.
      }                                             /// 3'l� kullanacaksak s�ras� ile if -- else if -- else kullan�l�r.
                                                        /// 4'l� kullanacaksak s�ras� ile if -- else if -- else if -- else kullan�l�r.
                                                         /// 5'li kullanacaksak s�ras� ile if -- else if -- else if -- else if -- else kullan�l�r.
                                                                          // BU �EK�LDE KULLANILIR.

    return 0;  // VE KULLANIMI
}*/


{
    int yas;
    printf ("Lutfen yasinizi giriniz. \n");
    scanf ("%d", &yas);

    int ugurlu_sayi;
    printf("Lutfen ugurlu sayinizi giriniz. \n");
    scanf ("%d", &ugurlu_sayi);

      if ( ((yas>30) && (yas<60)) || (ugurlu_sayi<42) )  //VE -- YA DA KISIMLARINA D�KKAT KARI�IK OLAB�L�YOR. �kisinden biri do�ru ise alt sat�r yazd�r�l�r.
       {                                                 // E�ittir ifadesini ( == ) 2 tane kullanmay� unutmay�n.
        printf ("Yolun yarisi gitmis \n");
       }
      else
        {
         printf("Daha yas genc masallah \n");            /// 2'li kullanacaksak s�ras� ile if -- else kullan�l�r.
        }                                            /// 3'l� kullanacaksak s�ras� ile if -- else if -- else kullan�l�r.
                                                     /// 4'l� kullanacaksak s�ras� ile if -- else if -- else if -- else kullan�l�r.
                                                    /// 5'li kullanacaksak s�ras� ile if -- else if -- else if -- else if -- else kullan�l�r.
                                                                       // BU �EK�LDE KULLANILIR.
    return 0;
}
