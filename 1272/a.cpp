#include <stdio.h>
#include <string.h>

main(){
 int  i, j, N, D;
 char C[60];

 scanf("%d", &N);
 getchar();
 for(i=0;i<N;i++){
	gets(C);
	D=strlen(C);
	if(C[0] != ' ')		printf("%c", C[0]);
	for(j=0;j<D-1;j++){
		if(C[j] == ' ' && C[j+1] != ' ') printf("%c", C[j+1]);
	}
	printf("\n");
 }
}

