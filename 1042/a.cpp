#include <stdio.h>

main()
{
 int A, B, C, A1, B1, C1, Aux;
 
 scanf("%d %d %d", &A, &B, &C);
 A1=A;   B1=B;   C1=C;

 if(A>B) { Aux = A;   A = B;   B = Aux; }
 if(A>C) { Aux = A;   A = C;   C = Aux; }
 if(B>C) { Aux = B;   B = C;   C = Aux; }

 printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", A, B, C, A1, B1, C1);

}
