#include <stdio.h>

main()
{
 int N;
 double A, B, C;

 scanf("%d", &N);
 while(scanf("%lf %lf %lf", &A, &B, &C) != EOF)
 	printf("%.1lf\n", (A*2+B*3+C*5)/10);
}
