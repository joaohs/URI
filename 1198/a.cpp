#include <stdio.h>
#include <stdlib.h>

main()
{
 long double A, B, Diferenca;

 while(scanf("%Lf %Lf", &A, &B) != EOF) {
	Diferenca = B-A;
	if(Diferenca<0) Diferenca=Diferenca*-1;
	printf("%.Lf\n", Diferenca);
 }
}
