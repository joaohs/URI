#include <stdio.h>

main(){
 int C, N, i, j;
 float Media, Nota, Soma, AcimaMedia, Grade[2000];

 scanf("%d", &C);
 for(i=0; i<C; i++){
	Soma=0.0; AcimaMedia=0.0;
 	scanf("%d", &N);
	for(j=0; j<N; j++){
 		scanf("%f", &Nota);
		Grade[j]=Nota;
		Soma=Soma+Nota;
	}
	Media=Soma/N;
	for(j=0; j<N; j++) { if(Grade[j]>Media) AcimaMedia++; }
	printf("%.3f%\n", AcimaMedia*100.0/N);
 }
}

