#include <stdio.h>

main()
{
 int X, Z, Soma=0, i;

 scanf("%d %d", &X, &Z);
 while(Z<X) scanf("%d", &Z);

 for(i=0;Soma<Z;i++){
	Soma=Soma+X;
	X++;
  }
 printf("%d\n", i);
}
