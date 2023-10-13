#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf ("Lutfen bir sayi giriniz. \n");
    scanf ("%d" ,&i);

       while (i!=0)
       {
           printf ("%3d" ,i);
           i--;
       }

    return 0;
}
