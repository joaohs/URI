#include <stdio.h>

main()
{
 float A, Soma=0;
 int Aux=0;
 
 while (scanf("%f", &A) != EOF) {
   if(A > 0) { Aux = Aux+1; Soma=Soma+A; }
 }

 printf("%d valores positivos\n%.1f\n", Aux, Soma/Aux);

}
