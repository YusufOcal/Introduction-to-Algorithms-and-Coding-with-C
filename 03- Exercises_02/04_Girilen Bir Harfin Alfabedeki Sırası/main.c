#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    int sira;

    printf("Harfinizi giriniz. (Buyuk kucuk fark etmez.) \n");
    scanf ("%c" ,&harf);

       if ( (harf>='a') && (harf<='z') )
       {
           sira = (int)harf-(int)'a'+1;         // Int formuna sokmak onemli
           printf ("%c harfi alfabede %d. siradadir. \n" ,harf,sira);
       }
       else if ( (harf>='A') && (harf<='Z') )
       {
           sira = (int)harf-(int)'A'+1;              // Int formuna sokmak onemli
           printf ("%c harfi alfabede %d. siradadir. \n" ,harf,sira);
       }
       else
       {
           printf ("Boyle bir harf yoktur. \n");
       }

    return 0;
}
