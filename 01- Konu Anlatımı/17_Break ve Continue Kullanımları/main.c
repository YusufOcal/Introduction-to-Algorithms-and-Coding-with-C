#include <stdio.h>
#include <stdlib.h>

int main()

/*{             /// BREAK BELLI BIR ADIMDAN SONRAKI ADIMLARI YOK ETMEMIZI SAGLAR
    int i;

       for (i=1; i<=10; i++)
       {
           if (i==6)
           {
               break;     // 5'ten sonraki sayilari ekranda gormeyecegiz.
           }
           printf ("%d \n",i);
       }
}*/

/*{           /// CONTÝNUE ADIM ATLAMAMIZI SAGLAR
    int i;

       for (i=1; i<=10; i++)
       {
           if (i==5)
           {
               continue;     // i==5 oldugunda o adýmý atlar ve yazdirmaya devam eder. Yani ekranda 5 sayisi gozukmeyecektir.
           }
           printf ("%d \n",i);
       }
}*/


{
    int i;

       for (i=1; i<=10; i++)
       {
           if (i==3)
           {
               continue;     // i==3 oldugunda o adýmý atlar ve yazdirmaya devam eder. Yani ekranda 3 sayisi gozukmeyecektir.
           }
           if (i==7)
           {
               break;
           }

           printf ("%d \n",i);
       }
}
