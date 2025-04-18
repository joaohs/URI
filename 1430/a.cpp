#include <stdio.h>
#include <string.h>

main(){
 char S[500];
 int Cont, Flag, Soma, A;

 while(scanf("%s", &S), S[0] != '*'){
	Cont=Flag=Soma=0;	A=strlen(S);
	for(int i=1; i<A; i++){
		if(S[i] != '/'){
			if(S[i] == 'W') Soma+=64;
			if(S[i] == 'H') Soma+=32;
			if(S[i] == 'Q') Soma+=16;
			if(S[i] == 'E') Soma+=8;
			if(S[i] == 'S') Soma+=4;
			if(S[i] == 'T') Soma+=2;
			if(S[i] == 'X') Soma+=1;
		}
		else{
			if(Flag == 0)  Flag=1;
			if(Soma == 64) Cont++;
			Soma=0;
		}
 	}
	printf("%d\n", Cont);
 }
}

