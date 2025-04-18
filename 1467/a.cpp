#include <stdio.h>

main(){
	int A, B, C;

	while(scanf("%d %d %d", &A, &B, &C) != EOF){
		if(B==C && A!=B)	printf("A\n");
			else 	if(A==C && B!=A)	printf("B\n");
				else	if(A==B && C!=A)	printf("C\n");
					else 	printf("*\n");
	}
}
