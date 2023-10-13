#include <stdio.h>
#include <stdlib.h>

int main() {

/*                                  /// EGZERSÝZ 1
    int matrix[10][10];
    int i,j;

       for (i=0; i<10; i++)
       {

           for (j=0; j<10; j++)
           {
               if (i==j)
               {
                   matrix[i][j]=1;
               }

               else
               {
                   matrix[i][j]=0;
               }
           }
       }


       for (i=0; i<10; i++)
       {

           for (j=0; j<10; j++)
           {
               printf ("%2d" ,matrix[i][j]);  // %2d yazýlýrsa sayýlarýn arasýndaki BOSLUK acýlýr.!!!!!!!!!!!
           }
           printf("\n");   /// EGER printf'i YANLIS YERDE KULLANSAK SONUC CIKMAZDI. ÝCTEKÝ FOR DONGUSUNDEN SONRA KULLANMALIYIZ.!!!!!!!!!!
       } */




       int dizi1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
       int dizi2[3][4]={{1,8,5,7},{1,2,4,6},{3,7,3,1}};
       int toplamdizi[3][4];
       int i,j;

          for (i=0; i<3; i++)
          {
              for (j=0; j<4; j++)
              {
                  toplamdizi[i][j]=dizi1[i][j]+dizi2[i][j];
              }
          }


          for (i=0; i<3; i++)
          {
              for (j=0; j<4; j++)
              {
                  printf ("%3d" ,toplamdizi[i][j]);
              }
              printf("\n");       /// COK ONEMLÝ BÝR DETAY !!!!!!!!!!!
          }

    return 0;
}
