#include <stdio.h>

main(){
 int T, N, P;

 scanf("%d", &T);
 for(int i=0; i<T; i++){
	scanf("%d", &N);
 	for(int j=0; j<N; j++){
		scanf("%d", &P);
		if(j==N/2)	printf("Case %d: %d\n", i+1, P);
	}
 }
}

