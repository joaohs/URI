#include <stdio.h>

main()
{
 int N, X, Y, R, B, C;
 scanf("%d", &N);
 for(int i=0; i<N; i++) {
 	scanf("%d %d", &X, &Y);
	R=(3*X)*(3*X)+(Y*Y);
	B=2*(X*X) + ((5*Y)*(5*Y));
	C=-100*X+(Y*Y*Y);
	if(R>B && R>C) printf("Rafael ganhou\n");
	if(B>R && B>C) printf("Beto ganhou\n");
	if(C>B && C>R) printf("Carlos ganhou\n");
 	}
}

