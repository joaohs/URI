#include <stdio.h>
#include <string.h>

main(){
 int N, Chave;
 char P[100];

 scanf("%d", &N);
 for(int i=0; i<N; i++){
	scanf("%s %d", P, &Chave);
	for(int j=0; j<strlen(P); j++){
		if((P[j]-Chave) > 64)	printf("%c", P[j]-Chave);
		else			printf("%c", P[j]-Chave+26);
	}
	printf("\n");
 }
}

