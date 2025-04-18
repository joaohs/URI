#include <stdio.h>

#define MAX 100

main()
{
 float A[MAX];
 int i, Aux;

//obs: a entrada pode ser int ou float, positivo ou negativo.

 for(i=0;i<MAX;i++) { scanf("%f", &A[i]); }
 for(i=0;i<MAX;i++) {
	if(A[i] <= 10) {
		Aux=A[i];
		if(Aux == A[i])
			printf("A[%d] = %.0f\n", i, A[i]);
		   else
			printf("A[%d] = %.1f\n", i, A[i]);
	}
  }
}
