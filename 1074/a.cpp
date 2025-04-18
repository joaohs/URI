#include <stdio.h>

main()
{
 int N;

 scanf("%d", &N);

 while(scanf("%d", &N) != EOF){
	if(N==0) { printf("NULL\n"); }
	if(N<0)  {
		if(N%2==0) { printf("EVEN NEGATIVE\n"); }
		if(N%2!=0) { printf("ODD NEGATIVE\n"); }
	}
	if(N>0)  {
		if(N%2==0) { printf("EVEN POSITIVE\n"); }
		if(N%2!=0) { printf("ODD POSITIVE\n"); }
	}
 }
}
