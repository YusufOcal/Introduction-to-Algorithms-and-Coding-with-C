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

     // BU iþlemler sadece bölümün cevabýný verir. Cevapta ondalýk kýsýmlarýn çýkamsýný istiyorsak float veri tipinde belirlemeliyiz.
     // 8/5 yazarsak ekranda 1 çýkar. Fakat ondalýký olabilmesi için float türünde olmalýdýr.
     // 4/6 yazarsak ekranda 0 çýkar.
     // 18/4 yazarsak ekranda 4 çýkar.
}*/



/*{      // ONDALIKLI ÇIKMASI ÝÇÝN YAPACAÐIMIZ 1. YÖNTEM
      // int türündeki ifadeleri FLOAT veri tipinde yazarsak ondalýklý sonuç elde ederiz.
    float a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%f",&a);
    float b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%f",&b);

   printf("Girilen sayilarin bolumu = %f \n",a/b);

       // Flot veri tipine çevirdiðimiz için butun %d 'ler %f olarak deðiþmelidir.
       // Floattan sonra kaç basamak yazacagýmýzý yine %.3f gibi belirleyebiliriz.
}*/



/*{           // ONDALIKLI ÇIKMASI ÝÇÝN YAPILABÝLÝCEK 2. YÖNTEM
     int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
     int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin bolumu = %f \n",(float) a/b);

    /// EN SONDA EKRANA YAZDIRACAGIMIZ KOD KISMNDAKÝ int veri tipini FLOAT veri tipine dönüþtürürsek istediðimizi elde ederiz.
    /// Parantez içindeki float (float) ifadesine DÝKKAT!!!!!
}*/



{   // MOD BULMA bir sayýnýn diðer bir sayýya bçlümünden kalaný bulur % ile gösterilir.
     int a;
   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&a);
     int b;
   printf("Lutfen bir sayi daha giriniz.\n");
   scanf("%d",&b);

   printf("Girilen sayilarin bolumunden kalan = %d \n",a%b);

     // Sonuc zaten tam sayý çýkacaðý için flot'a gerek yok.
}


