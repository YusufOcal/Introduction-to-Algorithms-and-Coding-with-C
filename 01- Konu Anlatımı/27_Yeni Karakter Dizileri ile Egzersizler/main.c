#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int main()
/*{
    char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy (sonuc,dizi1);
    strncpy (sonuc+3,dizi2,5);

    printf ("%s \n" ,sonuc);

    return 0;
}*/



{  /// SORU== Elemanlari bir,iki,uc,dort,bes olan 2 boyutlu bir dizinin 4.eleman�n 3.karakterini ekrana yzd�ran kodu yaziniz.


    char nal[100][100]={{'b','i','r','\0'},{'i','k','i','\0'},{'u','c','\0'},{'d','o','r','t','\0'},{'b','e','s','\0'}}; // seklinde yaz�l�rsa \0 unutulmamal�.
    // char nal[100][100]={"bir","iki","uc","dort","bes"}; Seklinde de yaz�labilirdi hem daha kolay.

    printf ("Dizimin 4.elemani = %s 'dur. \n" ,nal[3]); // nal[3] yaz�l�r, Cunku 0'dan saymaya basl�yoruz.

    printf ("Dizimin 4.eleman 3.karakteri = %c 'dir \n" ,nal[3][2]); // Tek karakter c�kacag� icin %c yazdik. 0'dan sayarak eleman ve karakterin yerini tespit edip yazdirdik.

    return 0;
}
