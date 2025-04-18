#include <stdio.h>

main(){
 int N, A, B, contA, contB;

 while(scanf("%d", &N), N!=0){
	contA=contB=0;
	for(int i=0; i<N; i++){
 		scanf("%d %d", &A, &B);
		if(A > B)   contA++;
		if(A < B)   contB++;
	}
	printf("%d %d\n", contA, contB);
 }
}

