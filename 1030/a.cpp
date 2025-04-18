#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	struct node *next;
};

main(){
  int i, N, M, cont=1;
  struct node *t, *x;

  scanf("%d", &N);
  while(scanf("%d %d", &N, &M) != EOF){
	t=(struct node *) malloc(sizeof *t);
	t->key=1;	x=t;
	for(i=2; i<=N; i++){
		t->next=(struct node *) malloc(sizeof *t);
		t=t->next;
		t->key=i;
	}
	t->next=x;
	while(t != t->next){
		for(i=1; i<M; i++)	t=t->next;
		x=t->next;
		t->next=t->next->next;
		free(x);
	}
	printf("Case %d: %d\n", cont, t->key);	cont++;
  }
}

