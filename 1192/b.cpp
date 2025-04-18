#include <stdio.h>

main()
{
 int N;
 char P[3];
 
 scanf("%d", &N);

 for (int i=0; i < N; i++) {
 	scanf("%s", &P);

	if( P[0] == P[2] )	printf("%d\n", (P[0] - 48) * (P[2] - 48)); 
	   else {
		if( P[1] >= 65 && P[1] <=  90 )		printf("%d\n", P[2] - P[0]);
		if( P[1] >= 97 && P[1] <= 122 )		printf("%d\n", P[0] + P[2] - 96);
		}
  }
}
