#include <stdio.h>

main(){

 int I=1, J;

 for(J=60; J>=0; J=J-5) {
	printf("I=%d J=%d\n", I, J);
	I=I+3;
   }
}
