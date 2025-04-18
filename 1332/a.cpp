#include <stdio.h>
#include <string.h>

main(){
 char P[10];
 int N;

 scanf("%d", &N);
 while(scanf("%s", &P) != EOF){
	if(strlen(P) > 3)	printf("3\n");
	else{
		if((P[0]=='o' && P[1]=='n') || (P[0]=='o' && P[2]=='e') || (P[1]=='n' && P[2]=='e'))
			printf("1\n");
		else	printf("2\n");
	}
 }
}

