#include <stdio.h>

main(){
 int N, R, M, V[10001]={0}, aux, i;
 char temp[1000000];

 while(scanf("%d %d", &N, &R) != EOF){
	if(N==R){ getchar(); gets(temp); printf("*"); }
	else{	aux=0;
		for(i=0; i<R; i++)  { scanf("%d", &M); 	V[M]=1;			}
		for(i=1; i<=N; i++) { if(V[i]==0)	printf("%d ", i);	}
		for(i=1; i<=N; i++)   V[i]=0;
	}
	printf("\n");
 }
}

