#include <stdio.h>

main(){

 float I;

 printf("I=0 J=1\n");
 printf("I=0 J=2\n");
 printf("I=0 J=3\n");

 for(I=1; I<5; I++) {
	printf("I=%.1f J=%.1f\n", I*0.2, I*0.2+1);
	printf("I=%.1f J=%.1f\n", I*0.2, I*0.2+2);
	printf("I=%.1f J=%.1f\n", I*0.2, I*0.2+3);
   }

 printf("I=1 J=2\n");
 printf("I=1 J=3\n");
 printf("I=1 J=4\n");

 for(I=12; I<20; I=I+2) {
	printf("I=%.1f J=%.1f\n", I/10, I/10+1);
	printf("I=%.1f J=%.1f\n", I/10, I/10+2);
	printf("I=%.1f J=%.1f\n", I/10, I/10+3);
   }

 printf("I=2 J=3\n");
 printf("I=2 J=4\n");
 printf("I=2 J=5\n");

}
