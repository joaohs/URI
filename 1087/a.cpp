#include<stdio.h>
#include <stdlib.h>

main()
{
 int X1, Y1, X2, Y2;
 
 while(scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2) != EOF) {
	if(X1==0) return(0);
	if(X1==X2 && Y1==Y2) printf("0\n");
		else if(X1==X2 || Y1==Y2 || (abs(X1-X2)==abs(Y1-Y2)) ) printf("1\n");
			else printf("2\n");
 }
}
