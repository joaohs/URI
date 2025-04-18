#include <stdio.h>

main()
{
 int i=1, N, Aux=0, Auxi=1;

 while(scanf("%d", &N) != EOF) {
	if(N>Aux) { Aux=N; Auxi=i; }
	i++;
   }
 	printf("%d\n%d\n", Aux, Auxi);
}
