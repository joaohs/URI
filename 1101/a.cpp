#include <stdio.h>

main(){

 int M, N, SOMA;

 while(scanf("%d %d", &M, &N) != EOF){
	if((M<=0) || (N<=0)) return(0);
	SOMA=0;
	if(M<N){
		for(;M<=N;M++){
			printf("%d ", M);
			SOMA = SOMA+M;
		}
	}
	else
		for(;N<=M;N++){
			printf("%d ", N);
			SOMA = SOMA+N;
		}
	printf("Sum=%d\n", SOMA);
  }
}
