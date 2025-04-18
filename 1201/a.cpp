#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct T_TREE{
	       struct T_TREE *ESQ;
	       int INFO;
	       struct T_TREE *DIR;
	      };

 int aux=0;

 /* PROTOTIPOS */
 struct T_TREE *constroe_tree(struct T_TREE *RAIZ, struct T_TREE *R, int X);
 struct T_TREE *gera_atomo();
 void pre_ordem(struct T_TREE *R);
 void in_ordem(struct T_TREE *R);
 void pos_ordem(struct T_TREE *R);
 void procura(struct T_TREE *R, int X);
 struct T_TREE *remove(struct T_TREE *R, int NO);

 main()
 {
  struct T_TREE *RAIZ;   /* Primeiro no da arvore */
  char A[30];
  int num;

  RAIZ = NULL;   /* Inicializacao da arvore */
  while(scanf("%s", &A) != EOF) {
  	if(strlen(A) > 1) {
		if(A[0] == 'I')			{ aux=0; in_ordem(RAIZ);  printf("\n"); }
			else if(A[0]=='P') {
				if(A[1]=='R')	{ aux=0; pre_ordem(RAIZ); printf("\n"); }
					else	{ aux=0; pos_ordem(RAIZ); printf("\n"); }
			}
	}
	else{
		scanf("%d", &num);
		if(A[0] == 'I') {
			if(RAIZ)    constroe_tree(RAIZ, RAIZ, num);
     		   	else   RAIZ = constroe_tree(RAIZ, RAIZ, num);
		}
		if(A[0] == 'P') {
			aux=0;	procura(RAIZ, num);
			if(aux==0)	printf("%d nao existe\n", num);
		}
		if(A[0] == 'R') {
				if(num == RAIZ->INFO)
					RAIZ = remove(RAIZ, num);
				else { remove(RAIZ, num); }
		}
	}
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
  if(aux == 0)  { printf("%d", R->INFO); aux=1; }
        else    printf(" %d", R->INFO);
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
  if(aux == 0)	{ printf("%d", R->INFO); aux=1; }
	else	printf(" %d", R->INFO);
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
  if(aux == 0)  { printf("%d", R->INFO); aux=1; }
        else    printf(" %d", R->INFO);
 }

/*------------------------------------------------------------------------*
 * Funcao: PROCURA() - procura elemento.                                  *
 *                                                                        *
 *------------------------------------------------------------------------*/
 void procura(struct T_TREE *R, int C)
 {
  if(!R)   return;
  if((R->INFO == C) && aux==0)	{ printf("%d existe\n", R->INFO, C); aux=1; return; }
  procura(R->ESQ, C);
  procura(R->DIR, C);
 }

/*---------------------------------------------------------------------*
 * Funcao: REMOVE - faz a busca de um determinado no em uma            *
 *			 B-TREE e o remove da mesma.                   *
 *---------------------------------------------------------------------*/
 struct T_TREE *remove(struct T_TREE *R, int NO)
 {
  struct T_TREE *TEMP, *F;

  if(R == NULL) return NULL;
	else if(R->INFO > NO)
		R->ESQ = remove(R->ESQ, NO);
	else if(R->INFO < NO)
		R->DIR = remove(R->DIR, NO);
	else {	/*achou no a remover. no sem filhos.*/
		if((R->ESQ == NULL) && (R->DIR == NULL)) {
			//free(R);
			R = NULL;
		}
		/*no apenas tem filho a direita*/
		else if(R->ESQ == NULL){
			TEMP = R;
			R = R->DIR;
			//free(TEMP);
		}
		/*apenas tem filho a esquerda*/
		else if(R->DIR == NULL){
			TEMP = R;
			R = R->ESQ;
			//free(TEMP);
		}
		/*no tem os 2 filhos*/
		else {
			F = R->ESQ;
			while (F->DIR != NULL){
				F = F->DIR;
			}
			R->INFO = F->INFO; /*troca as informacoes*/
			F->INFO = NO;
			R->ESQ = remove(R->ESQ, NO);
		}
	}
	return R;
 }

