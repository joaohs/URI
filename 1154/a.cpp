#include <stdio.h>

main()
{
 double n, soma=0, cont=0;

 scanf("%lf", &n);
 while(n>=0){
	soma=soma+n;
	cont++;
	scanf("%lf", &n);
 }

 printf("%.2lf\n", soma/cont);
}

