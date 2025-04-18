#include <stdio.h>

main()
{
 int A, B;
 
 scanf("%d %d", &A, &B);

 if(A>B) if (A%B==0) { printf("Sao Multiplos\n"); return(0); }
 if(B>A) if (B%A==0) { printf("Sao Multiplos\n"); return(0); }

 printf("Nao sao Multiplos\n");

}
