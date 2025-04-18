#include <stdio.h>

main()
{
 float X, Y;
 
 while(scanf("%f %f", &X, &Y) != EOF) {
 	if(X==0 || Y==0) return(0);
 	if(X>0 && Y>0) printf("primeiro\n");
 	if(X<0 && Y>0) printf("segundo\n");
 	if(X<0 && Y<0) printf("terceiro\n");
 	if(X>0 && Y<0) printf("quarto\n");
 }
}
