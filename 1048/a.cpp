#include <stdio.h>

main()
{
 float A;
 
 scanf("%f", &A);

 if(A<=400)  { printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n", A+A*0.15, A*0.15); return(0); }
 if(A<=800)  { printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n", A+A*0.12, A*0.12); return(0); }
 if(A<=1200) { printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n", A+A*0.10, A*0.10); return(0); }
 if(A<=2000) { printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n", A+A*0.07, A*0.07); return(0); }

 printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n", A+A*0.04, A*0.04);

}
