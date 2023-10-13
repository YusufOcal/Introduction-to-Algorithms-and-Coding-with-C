#include <stdio.h>
#include <stdlib.h>
#define TAM 150

int main()
{
    int no,boy,minboy,minno,fark;

    printf("Lutfen ogrencinin numarasini giriniz. \n");
    scanf ("%d" ,&no);

    printf("Lutfen ogrencinin boyunu giriniz. \n");
    scanf ("%d" ,&boy);

    minno=no;
    fark=abs(boy-TAM);

    while (no>0)
    {
    printf("\nLutfen ogrencinin numarasini giriniz. \n");
    scanf ("%d" ,&no);

    printf("Lutfen ogrencinin boyunu giriniz. \n");
    scanf ("%d" ,&boy);

       if (abs(boy-TAM)<fark)
       {
           fark=abs(boy-TAM);
           minboy=boy;
           minno=no;
       }
    }

    printf ("\n%d nolu ogrenci %d boyu ile %dcm fark ile %dcm'ye en yakindir. \n",minno,minboy,fark,TAM);

    return 0;
}
