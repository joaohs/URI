#include <stdio.h>

main()
{
 int A, B, Aux, Soma=0;

 scanf("%d %d", &A, &B);
 if(A>B) {Aux=A; A=B; B=Aux;}

 A++;
 for(;A<B;A++){
	if(A%5==2 || A%5==3) printf("%d\n", A);
   }
}
