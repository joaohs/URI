#include <stdio.h> 
#include <stdlib.h> 

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

main(){
  int i, N, Par[200000]={0}, Imp[200000]={0}, ContP=0, ContI=0;

  scanf("%d", &N);
  while(scanf("%d", &N) != EOF){
	if(N%2==0)	{ Par[ContP]=N; ContP++; }
		else	{ Imp[ContI]=N; ContI++; }
  }
  qsort (Par, ContP, sizeof(int), compare);
  qsort (Imp, ContI, sizeof(int), compare);
  for(i=0; i<ContP; i++)	printf("%d\n", Par[i]);
  for(i=ContI-1; i>=0; i--)	printf("%d\n", Imp[i]);
}

