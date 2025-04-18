#include <stdio.h>

main()
{
 int A, B;
 
 scanf("%d %d", &A, &B);

 if(A<=B) { printf("O JOGO DUROU %d HORA(S)\n", B-A); return(0); }

 printf("O JOGO DUROU %d HORA(S)\n", (24-A)+B);

}
