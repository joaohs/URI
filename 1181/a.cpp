#include <stdio.h>

#define MAX 12

main() {
 float M[MAX][MAX], soma=0;
 int L, i, j;
 char T;

 scanf("%d %c", &L, &T);
 for(i=0;i<MAX;i++){
 	for(j=0;j<MAX;j++){
		scanf("%f", &M[i][j]);
	}
 }

 for(j=0;j<MAX;j++){
	soma=soma+M[L][j];
 }

 if(T=='S')	printf("%.1f\n", soma);
    else	printf("%.1f\n", soma/MAX);
}
