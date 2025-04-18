#include <stdio.h>

#define MAX 12

main()
{
 float M[MAX][MAX], soma=0;
 int C, i, j;
 char T;

 scanf("%d %c", &C, &T);

 for(i=0;i<MAX;i++){
 	for(j=0;j<MAX;j++){
		scanf("%f", &M[i][j]);
	}
 }

 for(i=0;i<MAX;i++){
	soma=soma+M[i][C];
 }

 if(T=='S')
	printf("%.1f\n", soma);
    else
	printf("%.1f\n", soma/MAX);
}
