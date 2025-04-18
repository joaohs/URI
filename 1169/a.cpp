#include <stdio.h>
#include <math.h>

main()
{
 int X, N, i;
 unsigned long long Quantity;

 scanf("%d", &N);
 for(i=0; i<N; i++) {
	scanf("%d", &X);
	Quantity=pow(2,X)/12000;
	printf("%lld kg\n", Quantity);
 }
}
