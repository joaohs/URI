#include<stdio.h>

main()
{
 float N;
 int Dias=0;
 
 scanf("%f", &N);
 while(scanf("%f", &N) != EOF ) {
	while(N>1) {
		N=N/2;
		Dias++;
	 }
	printf("%d dias\n", Dias);
	Dias=0;
 }
}
