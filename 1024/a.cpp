#include <stdio.h>
#include <string.h>

main(){
 int N, i, j, tam;
 char M[2000], Aux;

 scanf("%d", &N);
 getchar();
 for(i=0; i<N; i++){
	gets(M);
	//printf("%s\n", M);
	tam=strlen(M);
	for(j=0; j<tam; j++)  {if((M[j]>64 && M[j]<91) || (M[j]>96 && M[j]<123)) M[j]=M[j]+3;}
	for(j=0; j<tam/2; j++){Aux=M[j];   M[j]=M[tam-j-1];   M[tam-j-1]=Aux-1;}
	if(tam%2 != 0)        {M[(tam/2)]=M[(tam/2)]-1;}
	printf("%s\n", M);
 }
}

