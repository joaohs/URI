#include<stdio.h>
#include<stdlib.h>
#include <string.h>

 struct T_TREE{
	       int INFO;
	       char VALOR;
	       struct T_TREE *ESQ;
	       struct T_TREE *DIR;
	      };

 /* PROTOTIPOS */
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, char X, int j);
 void reconstroe(char *pre, char *in);
 struct T_TREE *gera_atomo();
 void pre_ordem(struct T_TREE *R);
 void in_ordem(struct T_TREE *R);
 void pos_ordem(struct T_TREE *R);

 main()
 {
  char pre[50], in[50];

  while(scanf("%s %s", pre, in) != EOF)
	reconstroe(pre, in);
 }

/*-------------------------------------------------------------------------*
 * Funcao: RECONSTROE() - reconstroe uma arvore binaria de ordenacao.      *
 *-------------------------------------------------------------------------*/
 void reconstroe(char *pre, char *in)
 {
  struct T_TREE *NO, *RAIZ;   /* Primeiro no da arvore */
  int i=0, j=0, tam;

  RAIZ = NULL;   /* Inicializacao da arvore */
  tam=strlen(in);
  for(i=0; i<tam; i++){
	for(j=0; j<tam; j++)	{ if(pre[i] == in[j]) break; }
	if(RAIZ)    constroe_tree(RAIZ, RAIZ, pre[i], j);
        	else   RAIZ = constroe_tree(RAIZ, RAIZ, pre[i], j);
  }
  pos_ordem(RAIZ);
  printf("\n");
 }

/*-------------------------------------------------------------------------*
 * Funcao: CONSTROE_TREE() - constroe uma arvore binaria de ordenacao.     *
 *-------------------------------------------------------------------------*/
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, char X, int j)
 {
  if(!R)
    {
     R = gera_atomo();
     R->INFO = j;
     R->VALOR = X;
     if(!RAIZ)   return R;   /* primeira entrada */
     if(j <= RAIZ->INFO)   RAIZ->ESQ = R;
     else   RAIZ->DIR = R;
     return R;
    }
  if(j< R->INFO)   constroe_tree(R, R->ESQ, X, j);
  else   constroe_tree(R, R->DIR, X, j);
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

/*----------------------------------------------------------------------*
 * Funcao: POS_ORDEM() - imprime o dado na tela quando este eh varrido  *
 *			 pela terceira vez.                             *
 *----------------------------------------------------------------------*/
 void pos_ordem(struct T_TREE *R)
 {
  if(!R)   return;
  pos_ordem(R->ESQ);
  pos_ordem(R->DIR);
  printf("%c", R->VALOR);
 }

