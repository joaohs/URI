#include <stdio.h>

main(){
 int N, X[2001]={0}, i;

 scanf("%d", &N);
 while(scanf("%d", &N) != EOF) X[N]++;
 for(i=0; i<2001; i++){
	if(X[i] != 0)   printf("%d aparece %d vez(es)\n", i, X[i]);
 }
}

