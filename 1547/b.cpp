#include <stdio.h>
#include <stdlib.h>

main()
{
 int N, Q, S, A, menor, posmenor, i, j, aux;

 scanf("%d", &N);
 for(i=0; i<N; i++) {
 	scanf("%d %d", &Q, &S);
 	scanf("%d", &A);
	posmenor=1; menor=10000;
	if(A == S) { printf("1\n"); }
	   else{
		menor=abs(S-A);
		posmenor=1;
 		for(j=1; j<Q; j++) {
 			scanf("%d", &A);
			if(A == S) { printf("%d\n", j+1); break; }
				else{
					aux=abs(S-A);
					if(menor > aux) {
						menor=aux;
						posmenor=j+1;
					}
				}
 		   }
		printf("%d\n", posmenor);
	   }
 }
}

