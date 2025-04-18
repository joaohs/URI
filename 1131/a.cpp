#include <stdio.h>

main()
{
 int A, B, Gremio=0, Inter=0, Empate=0;

 while(scanf("%d %d", &A, &B) != EOF) {
	if(A>B)  Inter++;
	if(A<B)  Gremio++;
	if(A==B) Empate++;
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &A);
	if(A==2) break;
  }

 printf("%d grenais\n", Gremio+Inter+Empate);
 printf("Inter:%d\n", Inter);
 printf("Gremio:%d\n", Gremio);
 printf("Empates:%d\n", Empate);
 if(Inter>Gremio) printf("Inter venceu mais\n");
 if(Inter<Gremio) printf("Gremio venceu mais\n");
 if(Inter==Gremio) printf("Nao houve vencedor\n");
}

