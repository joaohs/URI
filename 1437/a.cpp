#include <stdio.h>
#include <string.h>

main(){
 int N, Comando, Direcao, i;
 char Name[1001];

 while(scanf("%d", &N), N!=0){
	Comando=0;
	scanf("%s", Name);
	for(i=0; i<strlen(Name); i++)
		if(Name[i]=='D')	Comando++;
			else		Comando--;
	Direcao=Comando%4;
	if(Direcao==0)						printf("N\n");
		else if(Direcao==1 || Direcao==-1)
			if(Comando>=0)				printf("L\n");
				else				printf("O\n");
			else if(Direcao==2 || Direcao==-2)	printf("S\n");
				else
					if(Comando>=0)		printf("O\n");
						else		printf("L\n");
 }
}

