#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[200];
    int i=0,j=0;

    printf ("Lutfen kelimenizi giriniz \n");
    gets (kelime);

    while (i<strlen(kelime))
    {
        j=0;
        while (j<=i)
        {
            printf ("%c" ,kelime[j]);
            j++;
        }
        printf ("\n");
        i++;
    }

    return 0;
}
