#include <stdio.h>

int main(){
 int N, T, P, Soma, i;
 char Name[10];

 while(scanf("%d %d", &N, &T)){
	if(N==0 && T==0)	return 0;
	Soma=0;
	for(i=0; i<N; i++){
		scanf("%s %d", Name, &P);
		Soma=Soma+P;
	}
	printf("%d\n", (T*3)-Soma);
 }
}

