#include <stdio.h>
#include <string.h>

main(){
 int N, T, cont=0, TTotal=0, penalidades[91], i;
 char P, jud[40];

 scanf("%d", &N); getchar();
 while(N != 0){
 	for(i=65;i<91;i++)	penalidades[i]=0;
	cont=0; TTotal=0; 
 	for(i=0; i<N; i++){
		scanf("%c %d %s", &P, &T, jud);
		getchar();
		if(jud[0] == 'i')	penalidades[P] = penalidades[P]+20;
			else		{ cont++; TTotal = TTotal + penalidades[P] + T; }
 	}
 	printf("%d %d\n", cont, TTotal);
 	scanf("%d", &N); getchar();
 }
}

