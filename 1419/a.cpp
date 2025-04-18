#include <stdio.h>

main(){
  int R, M[20]={0}, L[20]={0}, i, ContM, ContL, Flag;

  while(scanf("%d", &R), R!=0 ){
	ContM=ContL=Flag=0;
	for(i=0; i<R;  i++)	scanf("%d", &M[i]);
	for(i=0; i<R;  i++)	scanf("%d", &L[i]);
	for(i=0; i<R;  i++){
		ContM+=M[i]; ContL+=L[i];
		if(M[i]==M[i+1] && M[i]==M[i+2] && Flag==0){
			Flag=1;
			if(!(L[i]==L[i+1] && L[i]==L[i+2]))	ContM+=30;
		}
		if(L[i]==L[i+1] && L[i]==L[i+2] && Flag==0)	{ Flag=1; ContL+=30; }
	}
	if(ContM>ContL)			printf("M\n");
		else if(ContM<ContL)	printf("L\n");
			else		printf("T\n");
	for(i=0; i<R;  i++){ M[i]=L[i]=0; }
  }
}

