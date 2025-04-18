#include <stdio.h>

main()
{
 int A=0, alcool=0, gas=0, diesel=0;

 while(scanf("%d", &A)!=EOF && A!=4){
	if(A==1) alcool++;
	if(A==2) gas++;
	if(A==3) diesel++;
 }

 printf("MUITO OBRIGADO\n");
 printf("Alcool: %d\n", alcool);
 printf("Gasolina: %d\n", gas);
 printf("Diesel: %d\n", diesel);
}
