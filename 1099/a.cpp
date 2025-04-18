#include <stdio.h>

main(){

 int X, Y, SOMA;

 scanf("%d", &X);
 while(scanf("%d %d", &X, &Y) != EOF){
	SOMA=0;
	if(X<Y){
		for(X++;X<Y;X++)
			if(X%2!=0) SOMA = SOMA+X;
		}
		else
		for(Y++;Y<X;Y++)
			if(Y%2!=0) SOMA = SOMA+Y;
 printf("%d\n", SOMA);
  }
}
