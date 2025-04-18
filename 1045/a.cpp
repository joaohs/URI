#include <stdio.h>

main()
{
 float A, B, C, Aux;
 
 scanf("%f %f %f", &A, &B, &C);

 if(A<B) { Aux = A;   A = B;   B = Aux; }
 if(A<C) { Aux = A;   A = C;   C = Aux; }
 if(B<C) { Aux = B;   B = C;   C = Aux; }

 if(A>(B+C))			{ printf("NAO FORMA TRIANGULO\n"); }
 if((A*A)==((B*B)+(C*C)))	{ printf("TRIANGULO RETANGULO\n");  return(0); }
 if((A*A)>(B*B+C*C))		{ printf("TRIANGULO OBTUSANGULO\n"); }
 if((A*A)<(B*B+C*C))		{ printf("TRIANGULO ACUTANGULO\n");  }
 if(A==B && B==C)		{ printf("TRIANGULO EQUILATERO\n"); return(0); }
 if(A==B || A==C || B==C)	{ printf("TRIANGULO ISOSCELES\n");  return(0); }

}
