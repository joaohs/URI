#include <stdio.h>

main()
{
 int A;

 scanf("%d", &A);
 for(int i=1;i<=A;i++){
	printf("%d %d %d\n", i, i*i, i*i*i);
 }
}
