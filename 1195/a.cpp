#include<stdio.h>
#include<stdlib.h>

 struct T_TREE{
	       struct T_TREE *ESQ;
	       int INFO;
	       struct T_TREE *DIR;
	      };

 /* PROTOTIPOS */
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, int X);
 struct T_TREE *gera_atomo();
 void pre_ordem(struct T_TREE *R);
 void in_ordem(struct T_TREE *R);
 void pos_ordem(struct T_TREE *R);

 main()
 {
  struct T_TREE *RAIZ;   /* Primeiro no da arvore */
  int S, i, j, C, N;

  scanf("%d", &C);
  for(i=1; i<=C; i++){
  	RAIZ = NULL;   /* Inicializacao da arvore */
  	scanf("%d", &N);
  	for(j=0; j<N; j++){
     		scanf("%d", &S);
     		if(RAIZ)    constroe_tree(RAIZ, RAIZ, S);
     		else   RAIZ = constroe_tree(RAIZ, RAIZ, S);
    	}
	printf("Case %d:", i);
  	printf("\nPre.:");	pre_ordem(RAIZ);
  	printf("\nIn..:");	in_ordem(RAIZ);
  	printf("\nPost:");	pos_ordem(RAIZ);
  	printf("\n\n");
  }
 }

/*-------------------------------------------------------------------------*
 * Funcao: CONSTROE_TREE() - constroe uma arvore binaria de ordenacao.     *
 *-------------------------------------------------------------------------*/
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, int X)
 {
  if(!R)
    {
     R = gera_atomo();
     R->INFO = X;
     if(!RAIZ)   return R;   /* primeira entrada */
     if(X <= RAIZ->INFO)   RAIZ->ESQ = R;
     else   RAIZ->DIR = R;
     return R;
    }
  if(X<= R->INFO)   constroe_tree(R, R->ESQ, X);
  else   constroe_tree(R, R->DIR, X);
 }

/*------------------------------------------------------------------------*
 * Funcao: GERA_ATOMO() - gera o i-ezimo atomo de uma arvore.             *
 *------------------------------------------------------------------------*/
 struct T_TREE *gera_atomo()
 {
  struct T_TREE *I;

  I = (struct T_TREE *)malloc(sizeof(struct T_TREE));
  if(!I)   exit(0);
  I->ESQ = I->DIR = NULL;
  return I;
 }

/*-----------------------------------------------------------------------*
 * Funcao: PRE_ORDEM() - imprime o dado na tela quando este eh varrido   *
 *			 pela primeira vez.                              *
 *-----------------------------------------------------------------------*/
 void pre_ordem(struct T_TREE *R)
 {
  if(!R)   return;
  printf(" %d", R->INFO);
  pre_ordem(R->ESQ);
  pre_ordem(R->DIR);
 }

/*------------------------------------------------------------------------*
 * Funcao: IN_ORDEM() - imprime o dado na tela quando este eh varrido     *
 *			pela segunda vez.                                 *
 *------------------------------------------------------------------------*/
 void in_ordem(struct T_TREE *R)
 {
  if(!R)   return;
  in_ordem(R->ESQ);
  printf(" %d", R->INFO);
  in_ordem(R->DIR);
 }

/*----------------------------------------------------------------------*
 * Funcao: POS_ORDEM() - imprime o dado na tela quando este eh varrido  *
 *			 pela terceira vez.                             *
 *----------------------------------------------------------------------*/
 void pos_ordem(struct T_TREE *R)
 {
  if(!R)   return;
  pos_ordem(R->ESQ);
  pos_ordem(R->DIR);
  printf(" %d", R->INFO);
 }

