#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=9;
    {
        int x=2;
        printf("Sayi = %d",x);
    }
        // Ekranda Sayi = 2 yazacakt�r.
}       // Bu demek oluyor ki en i�teki yani en local olan de�i�kendeki ifade ekrana yazd�r�lacakt�r.
        // Di�er Programlama dillerinde bu olay�n ad� PARENT-CH�LD olsasda C Dilinde ad� LOCAL-GLOBAL olarak adland�r�l�r.
