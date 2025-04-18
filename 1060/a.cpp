#include <stdio.h>

main()
{
 float A;
 int Aux=0;
 
 while (scanf("%f", &A) != EOF) {
   if(A > 0) Aux = Aux+1;
 }

 printf("%d valores positivos\n", Aux);

}
