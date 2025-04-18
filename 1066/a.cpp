#include <stdio.h>

main()
{
 int A, Par=0, Impar=0, Positivo=0, Negativo=0;
 
 while (scanf("%d", &A) != EOF) {
   if(A%2==0) Par = Par+1;
	else Impar = Impar+1;

   if(A>0) Positivo = Positivo+1;
   if(A<0) Negativo = Negativo+1;
 }

 printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", Par, Impar, Positivo, Negativo);

}
