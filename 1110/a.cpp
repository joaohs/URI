#include <stdio.h>
#include <stdlib.h>
 
struct NO{
        int NRO;
        struct NO *PONT;
    };
 
struct NO *CAUDA;
 
struct NO *gera_atomo(){
  struct NO *I;
  I = (struct NO *)malloc(sizeof(struct NO));
  if(!I)   exit(0);
  I->PONT = NULL;
  return I;
}
 
struct NO *constroi_lista(struct NO *TOPO, int A){
  struct NO *Atomo;
  TOPO=gera_atomo();
  TOPO->NRO=A;
  CAUDA = TOPO;
  for(int j=A-1; j>0; j--){
    Atomo = gera_atomo();
    Atomo->NRO = j;
    Atomo->PONT = TOPO;
    TOPO = Atomo;
  }
  return TOPO;
}
 
main(){
  int N, flag;
  struct NO *TOPO;
 
  while(scanf("%d", &N), N!=0){
    TOPO=NULL;  flag=0;
    TOPO=constroi_lista(TOPO, N);
    printf("Discarded cards: ");
    while(TOPO != CAUDA) {
        if(flag==0) { printf("%d",   TOPO->NRO); flag=1; }
            else{ printf(", %d", TOPO->NRO);         }
        TOPO=TOPO->PONT;
        CAUDA->PONT=TOPO;
        CAUDA=TOPO;
        TOPO=TOPO->PONT;
        CAUDA->PONT=NULL;
    }
    printf("\nRemaining card: %d\n", TOPO->NRO);
  }
}

