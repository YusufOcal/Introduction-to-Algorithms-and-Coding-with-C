#include <stdio.h>
#include <stdlib.h>

/* int main()        /// KARENIN ALANI
{
    float kenar,alan;

    printf("Lutfen karenin bir kenar uzunlugunu giriniz. \n");
    scanf ("%f" ,&kenar);

    alan = kenar*kenar;

    printf ("Alan = %.3f" ,alan);

    return 0;
} */

/* int main()        /// MÝLDEN KÝLOMETREYE ÇEVÝRME
{
    float sayi,km,MIL;

    MIL=1.609;  // ( #define MIL 1.609 ) kodu ile de en ust kýsma define edilebilirdi.

    printf("Lutfen hesaplamak istediginiz mil degerini giriniz. \n");
    scanf ("%f" ,&sayi);

    km = sayi*MIL;

    printf ("%.3f kilometre yapar." ,km);

    return 0;
} */


/* int main()        /// DAIRENIN ALANI
{
    float alan,yaricap,PI;

    PI=3.14;  // ( #define PI 3.14 ) kodu ile de en ust kýsma define edilebilirdi.

    printf("Lutfen yaricap degerini giriniz. \n");
    scanf ("%f" ,&yaricap);

    alan = PI*yaricap*yaricap;

    printf ("Alan = %.2f" ,alan);

    return 0;
} */


/* int main()        /// HACIM SORUSU
{
    float en,boy,yukseklik,hacim;

    printf("Lutfen sirasiyla havuzun en-boy-yukseklik degerlerini giriniz. \n");
    scanf ("%f %f %f" ,&en ,&boy ,&yukseklik);

    hacim = en*boy*yukseklik;

    printf ("Havuzun hacmi = %.2f" ,hacim);

    return 0;
} */



/* int main()        /// GIRILEN BIR SAYININ 13 VE 17'ye BOLUNUP BOLUNMEDIGINI BULAN PROGRAM
{
    int sayi;

    printf ("Lutfen bir sayi giriniz. \n");
    scanf ("%d" ,&sayi);

       if ( (sayi%13==0) && (sayi%17==0) )
       {
           printf ("%d sayisi 13'e ve 17'ye tam bolunur. \n" ,sayi);
       }
       else if (sayi%13==0)
       {
           printf ("%d sayisi 13'e tam bolunur ama 17'ye tam bolunmez. \n" ,sayi);
       }

       else if (sayi%17==0)
       {
           printf ("%d sayisi 13'e tam bolunmez ama 17'ye tam bolunur. \n" ,sayi);
       }
       else
       {
           printf ("Girilen sayi 13'e de 17'ye de tam bolunmez. \n" ,sayi);
       }

    return 0;
} */


/* int main()        /// KARENIN ALANI
{
    float x,y,z,ort;

    printf("Lutfen ortalama hesabi yapilacak 3 sayiyi giriniz. \n");
    scanf ("%f %f %f" ,&x,&y,&z);

    ort = (x+y+z)/3;

    printf ("Ortalama = %.2f" ,ort);

    return 0;
} */



/* int main()        /// ORTALAMA HIZ HESAPLAMA
{
    int YOL;
    float orthiz,zaman;

    YOL = 450;    // Bunun yerine ( #define YOL 450 ) seklinde de yazılabilirdi.

    printf ("Lutfen kac saatte gittiginizi yaziniz. \n");
    scanf ("%f" ,&zaman);

    orthiz = YOL/zaman;

    printf ("Ortalama Hiz = %.4f \n" ,orthiz);

    return 0;
} */









