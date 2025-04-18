#include <stdio.h>

main()
{
 int X=1, Soma;

 while((scanf("%d", &X)!=EOF) && (X!=0)){
	Soma=0;
	if(X%2!=0) X++;
 	for(int i=0;i<5;i++){
		Soma=Soma+X;
		X=X+2;
	  }
	printf("%d\n", Soma);
 }
}
