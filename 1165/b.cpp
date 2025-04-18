#include<stdio.h>
 
main()
{
 int N, C=2;
 
 scanf("%d",&N);
 while(scanf("%d",&N) != EOF ) {
	for(C=2; C<=N-1; C++) {
		if(N%C==0) {
			printf("%d nao eh primo\n", N);
			break;
		}
 	}
 	if(C==N)
		printf("%d eh primo\n", N);
 }
}
