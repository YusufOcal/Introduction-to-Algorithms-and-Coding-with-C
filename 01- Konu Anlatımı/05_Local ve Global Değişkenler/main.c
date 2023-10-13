#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=9;
    {
        int x=2;
        printf("Sayi = %d",x);
    }
        // Ekranda Sayi = 2 yazacaktýr.
}       // Bu demek oluyor ki en içteki yani en local olan deðiþkendeki ifade ekrana yazdýrýlacaktýr.
        // Diðer Programlama dillerinde bu olayýn adý PARENT-CHÝLD olsasda C Dilinde adý LOCAL-GLOBAL olarak adlandýrýlýr.
