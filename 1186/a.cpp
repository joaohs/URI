#include <stdio.h>

#define MAX 12

main()
{
 float M[MAX][MAX], soma=0;
 int i, j;
 char O;

 scanf("%c", &O);

 for(i=0;i<MAX;i++){
 	for(j=0;j<MAX;j++){
		scanf("%f", &M[i][j]);
	}
 }

 for(i=MAX-1;i>0;i--){
	for(j=MAX-i;j<MAX;j++){
		soma=soma+M[i][j];
	}
 }

 if(O=='S')
	printf("%.1f\n", soma);
    else
	printf("%.1f\n", soma/66);
}
