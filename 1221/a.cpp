#include<stdio.h>
#include <math.h>
 
main()
{
 int N, C=2, aux;
 
 scanf("%d",&N);
 while(scanf("%d",&N) != EOF ) {
	if(N>2 && N%2 == 0) printf("Not Prime\n");
	else{
		aux=0;
		for(C=2; C<=sqrt(N); C++) {
			if(N%C==0) {
				printf("Not Prime\n");
				aux=1;
				break;
			}
 		}
 		if(aux==0) printf("Prime\n");
	}
 }
}
