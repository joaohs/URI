#include <stdio.h>

main()
{
 int A, B, C, D;
 
 scanf("%d %d %d %d", &A, &B, &C, &D);

 if(A==C && B==D) { printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n", B-A); return(0); }

 if(A==C && B<=D) { printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", D-B); return(0); }

 if(A==C && B>D) { printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", (60-B)+D); return(0); }

 if(A<C && B<=D) { printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", C-A, D-B); return(0); }

 if(A<C && B>D) { printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", C-A-1, (60-B)+D); return(0); }

 if(A>C && B<=D) { printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24-A)+C, D-B); return(0); }

 if(A>C && B>D) { printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24-A)+C-1, (60-B)+D); return(0); }

}
