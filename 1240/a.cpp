#include <stdio.h>

main()
{
 int N, i, A, B, restoA, restoB;

 scanf("%d", &N);
 for(i=0; i<N; i++) {
	scanf("%d %d", &A, &B);
	if(A<B)	{ printf("nao encaixa\n"); B=-1; }
	while(B>0) {
		restoA = A%10;
		restoB = B%10;
		A = A/10;
		B = B/10;
		if (restoA != restoB) {
			printf("nao encaixa\n");
			B=-1;
		}
	 }
	if(B==0) printf("encaixa\n");
 }
}
