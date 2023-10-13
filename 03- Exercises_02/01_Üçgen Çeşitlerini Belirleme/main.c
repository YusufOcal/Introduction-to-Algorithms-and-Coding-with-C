#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Lutfen ucegenin ic acilarini giriniz. \n");
    scanf ("%d %d %d" ,&a,&b,&c);


    if (a+b+c==180)
{
        if ( (a==60) && (b==60) && (c==60) )
    {
        printf ("Esit kenar bir ucgen elde ettiniz. \n");
    }
    else if ( (a==b) || (a==c) || (b==c) )
    {
        printf ("Ikizkenar bir ucgen elde etmis olduk. \n");
    }
    else
    {
        printf ("Cesitkenar bir ucgen elde etmis olduk. \n");
    }
}
    else
    {
        printf ("Girilen acilar bir ucgen olusturmuyor. \n");
    }
    return 0;
}
