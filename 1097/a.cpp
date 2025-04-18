#include <stdio.h>

main(){

 int I;

 for(I=1; I<10; I=I+2) {
	printf("I=%d J=%d\n", I, I+6);
	printf("I=%d J=%d\n", I, I+5);
	printf("I=%d J=%d\n", I, I+4);
   }
}
