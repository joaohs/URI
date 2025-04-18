#include <stdio.h>

main()
{
 int X, Y, cont=0;

 scanf("%d %d", &X, &Y);
 for(int i=1;i<=Y;i++){
	printf("%d", i);
	cont++;
	if(cont==X && i!=Y) {printf("\n"); cont=0;}
		else {if(i!=Y) printf(" ");}
  }
 printf("\n");
}
