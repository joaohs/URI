#include <stdio.h>

main()
{
 int N, ContIn=0, ContOut=0;

 scanf("%d", &N);

 while(scanf("%d", &N)!=EOF){
	if((N>=10) && (N<=20))	ContIn++;
	else ContOut++;
 }

 printf("%d in\n%d out\n", ContIn, ContOut);

}
