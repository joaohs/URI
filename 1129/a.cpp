#include <stdio.h>

main(){
  int N, A, B, C, D, E;

  while(scanf("%d", &N), N!=0){
    for(int i=0; i<N; i++){
      scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
      if(A<=127 && (B>127 && C>127 && D>127 && E>127))			printf("A\n");
        else if(B<=127 && (A>127 && C>127 && D>127 && E>127))		printf("B\n");
          else if(C<=127 && (A>127 && B>127 && D>127 && E>127))		printf("C\n");
            else if(D<=127 && (A>127 && B>127 && C>127 && E>127))	printf("D\n");
              else if(E<=127 && (A>127 && B>127 && C>127 && D>127))	printf("E\n");
                else							printf("*\n");
	}
  }
}

