#include <stdio.h>
#include <stdlib.h>

int main()


/*{
   int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
   int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin toplami = %d \n",a+b);
}*/



/*{
     int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
     int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin cikarilmasi = %d \n",a-b);
}*/



/*{
    int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
    int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin carpimi = %d \n",a*b);
}*/



/*{
    int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
    int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin bolumu = %d \n",a/b);

     // BU i�lemler sadece b�l�m�n cevab�n� verir. Cevapta ondal�k k�s�mlar�n ��kams�n� istiyorsak float veri tipinde belirlemeliyiz.
     // 8/5 yazarsak ekranda 1 ��kar. Fakat ondal�k� olabilmesi i�in float t�r�nde olmal�d�r.
     // 4/6 yazarsak ekranda 0 ��kar.
     // 18/4 yazarsak ekranda 4 ��kar.
}*/



/*{      // ONDALIKLI �IKMASI ���N YAPACA�IMIZ 1. Y�NTEM
      // int t�r�ndeki ifadeleri FLOAT veri tipinde yazarsak ondal�kl� sonu� elde ederiz.
    float a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%f",&a);
    float b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%f",&b);

   printf("Girilen sayilarin bolumu = %f \n",a/b);

       // Flot veri tipine �evirdi�imiz i�in butun %d 'ler %f olarak de�i�melidir.
       // Floattan sonra ka� basamak yazacag�m�z� yine %.3f gibi belirleyebiliriz.
}*/



/*{           // ONDALIKLI �IKMASI ���N YAPILAB�L�CEK 2. Y�NTEM
     int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
     int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin bolumu = %f \n",(float) a/b);

    /// EN SONDA EKRANA YAZDIRACAGIMIZ KOD KISMNDAK� int veri tipini FLOAT veri tipine d�n��t�r�rsek istedi�imizi elde ederiz.
    /// Parantez i�indeki float (float) ifadesine D�KKAT!!!!!
}*/



{   // MOD BULMA bir say�n�n di�er bir say�ya b�l�m�nden kalan� bulur % ile g�sterilir.
     int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
     int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin bolumunden kalan = %d \n",a%b);

     // Sonuc zaten tam say� ��kaca�� i�in flot'a gerek yok.
}


