#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,j;

    printf ("Bir sayi giriniz. \n");
    scanf ("%d" ,&sayi);

    for (i=1; i<=sayi; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf ("%d" ,j);
        }
        printf ("\n");
    }

    return 0;
}
