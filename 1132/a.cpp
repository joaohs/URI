#include <stdio.h>

main()
{
 int A, B, Aux, Soma=0;

 scanf("%d %d", &A, &B);
 if(A>B) {Aux=A; A=B; B=Aux;}

 for(;A<=B;A++){
	if(A%13!=0) Soma=Soma+A;
   }

 printf("%d\n", Soma);
}
