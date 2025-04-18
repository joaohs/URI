#include <stdio.h>

main()
{
 long double A;

 scanf("%Lf", &A);

 if(A<0 || A>100) {
    printf("Fora de intervalo\n"); return(0);
  }

 if(A<=25) {
    printf("Intervalo [0,25]\n"); return(0);
  }

 if(A<=50) {
    printf("Intervalo (25,50]\n"); return(0);
  }

 if(A<=75) {
    printf("Intervalo (50,75]\n"); return(0);
  }

 if(A<=100) {
    printf("Intervalo (75,100]\n"); return(0);
  }
}
