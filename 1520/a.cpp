#include <stdio.h> 
#include <stdlib.h> 

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

main(){
  int N, X, Y, Num, P[20000]={0}, i, cont, inicio, fim, flag;

  while(scanf("%d", &N) != EOF){
	cont=inicio=fim=flag=0;
	for(i=0; i<N; i++){
		scanf("%d %d", &X, &Y);
		while(X<=Y){ P[cont]=X; cont++; X++; }
	}
	qsort (P, cont, sizeof(int), compare);
	scanf("%d", &Num);
	for(i=0; i<cont; i++){
		if(P[i]==Num){ inicio=i; flag=1; break; }
	}
	if(flag) 	{ while(P[i]==Num)  i++; fim=i-1; }
	if(flag)	printf("%d found from %d to %d\n", Num, inicio, fim);
		else	printf("%d not found\n", Num);
	for(i=0;i<cont; i++)	P[i]=0;
  }
}

