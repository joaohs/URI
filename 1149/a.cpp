#include <stdio.h>

main()
{
 int A, N, Soma=0;

 scanf("%d %d", &A, &N);
 while(N<=0) scanf("%d", &N);

 for(int i=0;i<N;i++){
	Soma=Soma+A;
	A++;
  }
 printf("%d\n", Soma);
}
