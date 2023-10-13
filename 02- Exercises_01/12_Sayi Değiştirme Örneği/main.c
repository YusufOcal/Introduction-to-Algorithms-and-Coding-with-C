#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Lutfen a sayisini giriniz. \n");
    scanf ("%d" ,&a);

    printf("Lutfen b sayisini giriniz. \n");
    scanf ("%d" ,&b);

    c=a;  /// DÝKKAT
    a=b;  /// DÝKKAT
    b=c;  /// DÝKKAT

    printf ("A sayisi %d oldu, B sayisi %d oldu. \n" ,a,b);

    return 0;
}
