#include <stdio.h>
#include <string.h>

struct Itens {
	char Nome[100];
	float Preco;
};

main(){
  int N, M, P, k, qtd;
  struct Itens I[1000];
  char prod[100];
  float Soma;

  scanf("%d", &N);
  for(int i=0; i<N; i++){
	Soma=0;
  	scanf("%d", &M);
  	for(int j=0; j<M; j++){
		scanf("%s %f", &I[j].Nome, &I[j].Preco);
	}
  	scanf("%d", &P);
  	for(int j=0; j<P; j++){
		k=0;
		scanf("%s %d", &prod, &qtd);
		while(strcmp(prod, I[k].Nome)) k++;
		Soma=Soma+qtd*I[k].Preco;
	}
	printf("R$ %.2f\n", Soma);
  }
}

