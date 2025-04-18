#include <stdio.h>
#include <stdlib.h>

main()
{
 int A, B, C, Maior;
 while(scanf("%d %d %d", &A, &B, &C) != EOF){
	Maior = (A + B + abs(A - B))/2;
	Maior = (Maior + C + abs(Maior - C))/2;
	printf("%d eh o maior\n", Maior);
 }
}
