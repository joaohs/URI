#include <stdio.h>

main()
{
 int A, B;
 
 scanf("%d %d", &A, &B);

 if(A==1) printf("Total: R$ %.2f\n", B*4); 
 if(A==2) printf("Total: R$ %.2f\n", B*4.5); 
 if(A==3) printf("Total: R$ %.2f\n", B*5); 
 if(A==4) printf("Total: R$ %.2f\n", B*2); 
 if(A==5) printf("Total: R$ %.2f\n", B*1.5); 

}
