#include <stdio.h>

main()
{
 int X, Y, Aux, Soma=0;

 scanf("%d %d", &X, &Y);

 if(X>Y) { Aux=X;   X=Y;   Y=Aux; }

 X++;
 for(;X<Y;X++)
 	if(X%2!=0) Soma=Soma+X;

 printf("%d\n", Soma);

}
