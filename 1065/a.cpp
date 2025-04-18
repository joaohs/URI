#include <stdio.h>

main()
{
 int A, Aux=0;
 
 while (scanf("%d", &A) != EOF) {
   if(A%2==0) { Aux = Aux+1; }
 }

 printf("%d valores pares\n", Aux);

}
