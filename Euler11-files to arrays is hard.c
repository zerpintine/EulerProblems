#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Must include numArray.txt file copied from problem 11 page
int main()
{
   int arr[20][20];
   FILE * fp;
   int i=0, j=0;
   unsigned long int consecutiveProduct  = 0;
   char a, b;
   fp = fopen("euler11numArray.txt", "r");
   while(fscanf(fp, " %c%c ", &a, &b)>0){
      arr[i][j]=10*(a-'0')+b-'0';
      if(i<19){
         i++;
      }else{
      i=0;
      j++;
      }
   }

   for(i=0; i<20; i++){
      for(j=0;j<20;j++){
         int k = 0, upDiag=1, downDiag=1, horiz=1, vert=1;
         for(k=0; k<4; k++){
          if(i<=16){horiz=horiz*arr[i+k][j];}
          if(j<=16){vert=vert*arr[i][j+k];}
          if(i<=16 && j<=16){downDiag=downDiag*arr[i+k][j+k];}
          if(i<=16 && j>2){upDiag=upDiag*arr[i+k][j-k];}
         }
         if(consecutiveProduct<upDiag){consecutiveProduct=upDiag;}
         if(consecutiveProduct<downDiag){consecutiveProduct=downDiag;}
         if(consecutiveProduct<horiz){consecutiveProduct=horiz;}
         if(consecutiveProduct<vert){consecutiveProduct=vert;}
      }
   }
   printf("The largest product is %lu\n", consecutiveProduct);

   return 0;
}
