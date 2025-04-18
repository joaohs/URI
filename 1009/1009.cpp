#include <stdio.h>

main()
{
 char A[100];
 double B, C, Comissao;
 
 scanf("%s %lf %lf", A, &B, &C);
 Comissao = C*15/100;
 printf("TOTAL = R$ %.2lf\n", B+Comissao);
}
