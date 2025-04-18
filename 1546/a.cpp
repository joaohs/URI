#include <stdio.h>

main()
{
 int N, K, A;
 scanf("%d", &N);
 for(int i=0; i<N; i++) {
 	scanf("%d", &K);
 	for(int j=0; j<K; j++) {
 		scanf("%d", &A);
		if(A == 1) printf("Rolien\n");
		if(A == 2) printf("Naej\n");
		if(A == 3) printf("Elehcim\n");
		if(A == 4) printf("Odranoel\n");
 	}
 }
}

