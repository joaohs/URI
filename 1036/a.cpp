#include <stdio.h>
#include <math.h>

main()
{
 int A, B, C, D;
 double R1, R2;

 scanf("%d %d %d", &A, &B, &C);

 if(A<=0) {
    printf("Impossivel calcular\n");
    return(0);
  }

 D=B*B-4*A*C;

 if(D<=0) {
    printf("Impossivel calcular\n");
    return(0);
  }

 R1=(-B+sqrt(D))/(2*A);
 R2=(-B-sqrt(D))/(2*A);

 printf("R1 = %.5lf\n", R1);
 printf("R2 = %.5lf\n", R2);

}
