#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct T_TREE{
	       struct T_TREE *ESQ;
	       char INFO;
	       struct T_TREE *DIR;
	      };

 int aux=0;

 /* PROTOTIPOS */
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, char X);
 struct T_TREE *gera_atomo();
 void pre_ordem(struct T_TREE *R);
 void in_ordem(struct T_TREE *R);
 void pos_ordem(struct T_TREE *R);
 void procura(struct T_TREE *R, char X);

 main()
 {
  struct T_TREE *RAIZ;   /* Primeiro no da arvore */
  char A[30];

  RAIZ = NULL;   /* Inicializacao da arvore */
  while(gets(A)){
	if(strlen(A) > 3){
		if(A[0] == 'I')			{ aux=0; in_ordem(RAIZ);  printf("\n"); }
			else if(A[0]=='P') {
				if(A[1]=='R')	{ aux=0; pre_ordem(RAIZ); printf("\n"); }
					else	{ aux=0; pos_ordem(RAIZ); printf("\n"); }
			}
	 }
	if((A[0] == 'I') && (A[1] == ' ')) {
		if(RAIZ)    constroe_tree(RAIZ, RAIZ, A[2]);
     		   else   RAIZ = constroe_tree(RAIZ, RAIZ, A[2]);
	   }
	if((A[0] == 'P') && (A[1] == ' ')) {
		aux=0;	procura(RAIZ, A[2]);
		if(aux==0)	printf("%c nao existe\n", A[2]);
	   }
  }
 }

/*-------------------------------------------------------------------------*
 * Funcao: CONSTROE_TREE() - constroe uma arvore binaria de ordenacao.     *
 *-------------------------------------------------------------------------*/
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, char X)
 {
  if(!R)
    {
     R = gera_atomo();
     R->INFO = X;
     if(!RAIZ)   return R;   /* primeira entrada */
     if(X < RAIZ->INFO)   RAIZ->ESQ = R;
     else   RAIZ->DIR = R;
     return R;
    }
  if(X< R->INFO)   constroe_tree(R, R->ESQ, X);
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
  if(aux == 0)  { printf("%c", R->INFO); aux=1; }
        else    printf(" %c", R->INFO);
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
  if(aux == 0)	{ printf("%c", R->INFO); aux=1; }
	else	printf(" %c", R->INFO);
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
  if(aux == 0)  { printf("%c", R->INFO); aux=1; }
        else    printf(" %c", R->INFO);
 }

/*------------------------------------------------------------------------*
 * Funcao: PROCURA() - procura elemento.                                  *
 *                                                                        *
 *------------------------------------------------------------------------*/
 void procura(struct T_TREE *R, char C)
 {
  if(!R)   return;
  if((R->INFO == C) && aux==0)	{ printf("%c existe\n", R->INFO, C); aux=1; return; }
  procura(R->ESQ, C);
  procura(R->DIR, C);
 }

