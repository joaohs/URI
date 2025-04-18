#include <stdio.h>

main()
{
 int A;

 scanf("%d", &A);
 for(int i=0;i<A;i++){
	printf("%d %d %d PUM\n", i*4+1, i*4+2, i*4+3);
 }
}
