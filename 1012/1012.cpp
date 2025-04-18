#include <stdio.h>

main()
{
 long double A, B, C;
 while(scanf("%Lf %Lf %Lf", &A, &B, &C) != EOF){
	printf("TRIANGULO: %.3Lf\n", A*C/2);
	printf("CIRCULO: %.3Lf\n", 3.14159*C*C);
	printf("TRAPEZIO: %.3Lf\n", (A+B)*C/2);
	printf("QUADRADO: %.3Lf\n", B*B);
	printf("RETANGULO: %.3Lf\n", A*B);
 }
}
