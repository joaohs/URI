#include <stdio.h>

main()
{
 int N, Soma, Aux;
	
 scanf("%Lf",&N);
 while(scanf("%d",&N) != EOF){
 	Soma = 0;
 	Aux=1;
 	while(Aux <= N/2){
		if(N%Aux == 0){
			Soma = Soma + Aux;
			}
			Aux++;
		  } 
	 if (Soma == N)
		printf("%d eh perfeito\n", N);
		else
		   printf("%d nao eh perfeito\n",N);
  }
}
