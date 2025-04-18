#include <stdio.h>

main()
{
 int X, Y, Soma;

 scanf("%d", &X);
 while(scanf("%d %d", &X, &Y)!=EOF){
	Soma=0;
	if(X%2==0) X++;
 	for(int i=0;i<Y;i++){
		Soma=Soma+X;
		X=X+2;
	  }
	printf("%d\n", Soma);
 }
}
