#include <stdio.h>

main()
{
 int X[1000], N, i, menor, posicao;

 scanf("%d", &N);

 for(i=0;i<N;i++){ scanf("%d", &X[i]); }

 menor=X[0];	posicao=0;

 for(i=1;i<N;i++){ 
	if(X[i]<menor){
		menor=X[i];	posicao=i;
	}
  }

 printf("Menor valor: %d\n", menor);
 printf("Posicao: %d\n", posicao);

}
