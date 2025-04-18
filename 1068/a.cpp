#include <stdio.h>
#include <string.h>

main(){
 int j, contAbre, contFecha, incorrect, tam;
 char D[2000];

 while(scanf("%s", D) != EOF){
	contAbre=contFecha=incorrect=0;
	tam=strlen(D);
	for(j=0; j<tam; j++){
		if(D[j]=='(') contAbre++;
		if(D[j]==')') contFecha++;
		if(D[j]==')' && contFecha>contAbre) { incorrect=1; break; }
	}
	if(contAbre!=contFecha || incorrect==1)	printf("incorrect\n");
		else	printf("correct\n");
 }
}

