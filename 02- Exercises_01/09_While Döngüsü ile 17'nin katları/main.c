#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i;
    int j;

    printf("Lutfen bir limit degeri giriniz. \n");
    scanf ("%d" ,&limit);

    i=0;   // Sayýlara 0'a esitlemek cok onemli yoksa iatenilen sonuc elde edilmez.
    j=0;   // Sayýlara 0'a esitlemek cok onemli yoksa iatenilen sonuc elde edilmez.
    while (i<limit)
    {
        if (i%17==0)
        {
            printf ("%4d" ,i);

            j++;      /// J degerini ust kisimda bir arttirmazsak 0 degeri de dahil olur ve 0 yazýnca bosluk birakir.

            if (j%10==0)
            {
                printf ("\n");
            }
        }
        i++;
    }

    return 0;
}
