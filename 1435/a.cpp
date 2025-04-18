#include <stdio.h>

#define MAX 100

main()
{
 int M[MAX][MAX];
 int i, j, k, N;

 while(scanf("%d", &N) != EOF) {
	if(N == 0) return(0);
 	for(i=0;i<N;i++){
 		for(j=0;j<N;j++){
			M[i][j] = 0;
		}
 	}
	for(k=0;k<(N+1)/2;k++){
	 	for(i=k;i<N;i++){
 			for(j=k;j<N;j++){
				if((i+j)<N)	M[i][j] = M[i][j] + 1;
					else	M[i][j] = M[N-1-i][N-1-j];
			}
 		}
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
