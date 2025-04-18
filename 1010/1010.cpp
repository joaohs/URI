#include <stdio.h>

main()
{
 int A, B, D, E;
 float C, F;
 scanf("%d %d %f", &A, &B, &C);
 scanf("%d %d %f", &D, &E, &F);
 printf("VALOR A PAGAR: R$ %.2f\n", B*C + E*F);
}
