#include <stdio.h>

main()
{
 int P1, P2, T, i, j;
 float G1, G2;

 scanf("%d", &T);

 for(j=0; j<T; j++) {
 	scanf("%d %d %f %f", &P1, &P2, &G1, &G2);
	if(P1>P2) {printf("0 anos.\n"); i=200;}
		else{
		 	for(i=1;i<=100;i++){
				P1=(P1+P1*(G1/100));
				P2=(P2+P2*(G2/100));
				if(P1>P2) {printf("%d anos.\n", i); i=200;}
			}
			if(i==101) {printf("Mais de 1 seculo.\n");}
		 }
	}
}
