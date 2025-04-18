#include <stdio.h>

#define MAX 100

main()
{
 int M[MAX][MAX];
 int i, j, k, N;

 while(scanf("%d", &N) != EOF) {
	if(N == 0) return(0);
	for(k=0;k<N;k++){
		M[k][k] = 1;
		i=k;	for(j=k+1;j<N;j++)	M[i][j] = M[i][j-1]+1;
		j=k;	for(i=k+1;i<N;i++)	M[i][j] = M[i-1][j]+1;
	}

 	for(i=0;i<N;i++){
 		for(j=0;j<N;j++){
			printf("%3d", M[i][j]);
			if(j<N-1) printf(" ");
		}
		printf("\n");
 	}
	printf("\n");
 }
}
