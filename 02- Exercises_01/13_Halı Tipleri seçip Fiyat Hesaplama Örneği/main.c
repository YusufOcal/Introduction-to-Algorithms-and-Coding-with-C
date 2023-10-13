#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T,B,S,tur;
    float mtr,ucret;

    printf("Lutfen bir hali tipi seciniz. (Tweetty icin T, Bugs icin B, Spiderman icin S yaziniz.)) \n");
    scanf ("%c" ,&tur);

    printf ("Lutfen kac metrakare alacaginizi belirtiniz. \n");
    scanf ("%f" ,&mtr);

    if (tur=='T')
    {
        ucret = mtr*18;
        printf ("Odenmesi gereken ucret = %.3f \n" ,ucret);
    }
    else if (tur=='B')
    {
        ucret = mtr*17;
        printf ("Odenmesi gereken ucret = %.3f \n" ,ucret);
    }
    else if (tur=='S')
    {
        ucret = mtr*19;
        printf ("Odenmesi gereken ucret = %.3f \n" ,ucret);
    }
    else
    {
        printf ("Bu turde bir hali elimizde yoktur!");
    }

    return 0;
}
