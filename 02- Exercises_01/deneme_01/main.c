#include <stdio.h>
#include <stdlib.h>
#define Tam 150

int main()
{
    int ogrencino,ogrenciboy,minno,minboy,fark;

    printf ("Ogrenci Numarasi : \n");
    scanf ("%d" ,&ogrencino);

    printf ("Ogrenci Boy : \n");
    scanf ("%d" ,&ogrenciboy);

    minno=ogrencino;
    fark=abs(ogrenciboy-Tam);

    while (ogrencino>0)
    {
        printf ("Ogrenci Numarasi : \n");
        scanf ("%d" ,&ogrencino);

        printf ("Ogrenci Boy : \n");
        scanf ("%d" ,&ogrenciboy);

        if (abs(ogrenciboy-Tam)<fark)
        {
            fark=abs(ogrenciboy-Tam);
            minboy=ogrenciboy;
            minno=ogrencino;
        }
    }

    printf ("%d nolu ogrenci %d boyu ile %d cm'ye en yakindir. \n" ,minno,minboy,Tam);

    return 0;
}
