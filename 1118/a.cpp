#include <stdio.h>

main()
{
 double A, B=-1;

 while(scanf("%lf", &A) != EOF) {
	if(A<0 || A>10) {printf("nota invalida\n");}
		else{
			if(B==-1) B=A;
				else {	printf("media = %.2lf\n", (A+B)/2);
					A=0;	B=-1;
					while(A<1 || A>2){
						printf("novo calculo (1-sim 2-nao)\n");
						scanf("%lf", &A);
				     	  }
					if(A==2) return(0);
				}
		}
  }
}

