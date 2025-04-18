#include <stdio.h>

main()
{
 int N[20], i, Aux;

 for(i=0;i<20;i++)	{scanf("%d", &N[i]);} 

 for(i=0;i<10;i++){
	Aux=N[i];	N[i]=N[19-i];		N[19-i]=Aux;
   }

 for(i=0;i<20;i++)	{printf("N[%d] = %d\n", i, N[i]);}
}
