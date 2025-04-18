#include <stdio.h> 
#include <stdlib.h> 

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

main(){
  int i, j, N, Q, Marbles[10000]={0}, Query, Cont=1;

  while(scanf("%d %d", &N, &Q), N!=0){
	printf("CASE# %d:\n", Cont);	Cont++;
	for(i=0; i<N; i++)	scanf("%d", &Marbles[i]);
	qsort (Marbles, N, sizeof(int), compare);
	for(i=0; i<Q; i++){
		scanf("%d", &Query);
		j=0;
		while(Query!=Marbles[j] && j<N) j++;
		if(j<N)		printf ("%d found at %d\n", Query, j+1);
			else	printf ("%d not found\n", Query);
	}
  }
}

