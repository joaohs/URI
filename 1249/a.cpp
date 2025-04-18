#include <stdio.h>
#include <string.h>

main(){
 char P[100];

 while(gets(P)){
	for(int j=0; j<strlen(P); j++){
		if(P[j] > 64 && P[j] < 91)
			if((P[j]+13) < 91)	printf("%c", P[j]+13);
			else			printf("%c", P[j]-13);
		else if(P[j] > 96 && P[j] < 123)
			if((P[j]+13) < 123)	printf("%c", P[j]+13);
			else			printf("%c", P[j]-13);
		else				printf("%c", P[j]);
		
	}
	printf("\n");
 }
}

