#include <stdio.h>

main()
{
 int A, B, C, D;

 scanf("%d %d %d %d", &A, &B, &C, &D);

 if(B>C)
  if(D>A) 
   if((C+D)>(A+B))
    if(C>=0)
     if(D>=0)
      if(A%2==0) {
          printf("Valores aceitos\n");
          return(0);
         }
 printf("Valores nao aceitos\n");

}
