#include <stdio.h>

main()
{
 int X;

 while(scanf("%d", &X)!=EOF){
	if(X==0) return(0);
	for(int i=1;i<=X;i++){
		printf("%d", i);
		if(i<X) printf(" ");
			else printf("\n");
	}
 }
}
