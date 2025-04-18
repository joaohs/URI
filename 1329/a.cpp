#include <stdio.h>

main(){
 int N, R, i, contMary, contJohn;

 while(scanf("%d", &N), N!=0){
	contMary=contJohn=0;
	for(i=0; i<N; i++){
		scanf("%d", &R);
		if(R==0) 	contMary++;
			else	contJohn++;
	}
	printf("Mary won %d times and John won %d times\n", contMary, contJohn);
 }
}

