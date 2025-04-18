#include <stdio.h>

main()
{
 int N, A, B;
 char P[3];
 
 scanf("%d", &N);

 for (int i=0; i < N; i++) {
 	scanf("%s", &P);
	A = P[0] - 48;	B = P[2] - 48;

	if( A == B )	printf("%d\n", A * B); 
	   else {
		if( P[1] >= 65 && P[1] <=  90 )		printf("%d\n", B - A);
		if( P[1] >= 97 && P[1] <= 122 )		printf("%d\n", A + B);
		}
  }
}
