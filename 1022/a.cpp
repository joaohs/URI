#include <stdio.h>

int mdc(int F1, int F2){
	int Aux, Resto;
	if(F1 > F2) { Aux=F1; F1=F2; F2=Aux; }
	Resto=F2%F1;
	while(Resto != 0){
		F2=F1;   F1=Resto;   Resto=F2%F1;
	}
 	if(F1>0) 	return  F1;
		else	return -F1;
}

main(){

  int N1, N2, D1, D2, N, F, A, B;
  char Op, L1, L2;

  scanf("%d", &N);
  for(int i=0; i<N; i++){
	scanf("%d %c %d %c %d %c %d", &N1, &L1, &D1, &Op, &N2, &L2, &D2);
	if(Op=='+'){
		A=N1*D2 + N2*D1;	B=D1*D2;
		printf("%d/%d = %d/%d\n", A, B, A/mdc(A,B), B/mdc(A,B));
	}
	if(Op=='-'){
		A=N1*D2 - N2*D1;	B=D1*D2;
		printf("%d/%d = %d/%d\n", A, B, A/mdc(A,B), B/mdc(A,B));
	}
	if(Op=='*'){
		A=N1*N2;		B=D1*D2;
		printf("%d/%d = %d/%d\n", A, B, A/mdc(A,B), B/mdc(A,B));
	}
	if(Op=='/'){
		A=N1*D2;		B=N2*D1;
		printf("%d/%d = %d/%d\n", A, B, A/mdc(A,B), B/mdc(A,B));
	}
  }
}

