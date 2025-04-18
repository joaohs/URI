#include <stdio.h>
#include <string.h>

main()
{
 int N, i, j, tamA, tamB, aux;
 char A[2000], B[2000];

 scanf("%d", &N);
 for(i=0; i<N; i++) {
	scanf("%s %s", A, B);
	aux=0;
	tamA=strlen(A);	tamB=strlen(B);
	if(tamA<tamB)	{ printf("nao encaixa\n"); }
		else{
			for(j=1; j<=tamB; j++){
				if(A[tamA-j] != B[tamB-j]) { printf("nao encaixa\n"); aux=1; break; }
			}
			if(aux==0) printf("encaixa\n");
		}
 }
}
