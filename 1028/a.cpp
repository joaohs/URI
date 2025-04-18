#include <stdio.h>

main(){
 int F1, F2, Aux, Resto;

 scanf("%d", &F1);
 while(scanf("%d %d", &F1, &F2) != EOF){
	if(F1 > F2) { Aux=F1; F1=F2; F2=Aux; }
	Resto=F2%F1;
	while(Resto != 0){
		F2=F1;
		F1=Resto;
		Resto=F2%F1;
	}
 	printf("%d\n", F1);
 }
}

