#include <stdio.h>

main(){
 int N, A[100]={0}, K;

 while(scanf("%d", &N), N!=0){
	for(int i=0; i<N; i++)	scanf("%d", &A[i]);
	scanf("%d", &K);
	while(A[K-1] != K)	K=A[K-1];
	printf("%d\n", K);
 }
}

