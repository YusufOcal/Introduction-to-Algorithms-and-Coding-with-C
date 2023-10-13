#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rastgele;
srand(time(NULL));
rastgele=rand()%999;

printf("%d",rastgele);
    return 0;
}
