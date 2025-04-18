#include <stdio.h>
#include <string.h>

main(){
 int N, T, cont=0, TTotal=0, penalidades[26], i;
 char P, jud[40];

 scanf("%d", &N); getchar();
 while(N != 0){
 	for(i=0;i<26;i++)	penalidades[i]=0;
	cont=0; TTotal=0; 
 	for(i=0; i<N; i++){
		scanf("%c %d %s", &P, &T, jud);
		getchar();
		if(jud[0] == 'i')	penalidades[P-65] = penalidades[P-65]+20;
			else		{ cont++; TTotal = TTotal + penalidades[P-65] + T; }
 	}
 	printf("%d %d\n", cont, TTotal);
 	scanf("%d", &N); getchar();
 }
}

