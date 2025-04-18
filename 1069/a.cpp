#include <stdio.h>
#include <string.h>

main(){
 int N, i, j, contMaior, contMenor, tam;
 char D[2000];

 scanf("%d", &N);
 for(i=0; i<N; i++){
	contMaior=contMenor=0;
	scanf("%s", D);
	tam=strlen(D);
	for(j=0; j<tam; j++){
		if(D[j]=='>' && contMenor>contMaior) contMaior++;
		if(D[j]=='<') contMenor++;
	}
	if(contMaior < contMenor)	printf("%d\n", contMaior);
		else			printf("%d\n", contMenor);
 }
}

