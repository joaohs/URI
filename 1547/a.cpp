#include <stdio.h>
#include <stdlib.h>

main()
{
 int N, Q, S, A, menor, difmenor, dif, i, j, aux;

 scanf("%d", &N);
 for(i=0; i<N; i++) {
	aux=0; difmenor=20000; 
 	scanf("%d %d", &Q, &S);
	for(j=0; j<Q; j++){
 		scanf("%d", &A);
		if(A == S) { if(aux==0) {printf("%d\n", j+1); aux=1; }}
			else { 
				dif=abs(S-A);
				if(dif < difmenor) {
					difmenor=dif;
					menor=j;
				}
			}
	   }
	if(aux == 0) printf("%d\n", menor+1);
 }
}

