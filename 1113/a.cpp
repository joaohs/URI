#include <stdio.h>

main(){

 int M, N;

 while(scanf("%d %d", &M, &N) != EOF){
	if(M==N) return(0);
	if(M<N){
			printf("Crescente\n");
			}
		else{
			printf("Decrescente\n");
			}
	}
}
