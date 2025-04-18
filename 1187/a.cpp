#include <stdio.h>

#define MAX 12

main()
{
 double M[MAX][MAX], soma=0;
 int i, j;
 char O;

 scanf("%c", &O);

 for(i=0;i<MAX;i++){
 	for(j=0;j<MAX;j++){
		scanf("%lf", &M[i][j]);
	}
 }

 for(i=0;i<5;i++){
	for(j=i+1;j<MAX-1-i;j++){
	//	printf("i=%d j=%d\n", i, j);
		soma=soma+M[i][j];
	}
 }

 if(O=='S')
	printf("%.1lf\n", soma);
    else
	printf("%.1lf\n", soma/30);
}
