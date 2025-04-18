#include <stdio.h>

main()
{
 int N;
 double A, B;

 scanf("%d", &N);
 while(scanf("%lf %lf", &A, &B) != EOF) {
 	if(B == 0) printf("divisao impossivel\n");
 	if(B != 0) printf("%.1lf\n", A/B);
  }
}

