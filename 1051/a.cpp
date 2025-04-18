#include <stdio.h>

main()
{
 float A;
 
 scanf("%f", &A);

 if(A<=2000)  { printf("Without taxes\n", A); return(0); }
 if(A<=3000)  { printf("R$ %.2f\n", ((A-2000)*0.08)); return(0); }
 if(A<=4500)  { printf("R$ %.2f\n", 80+((A-3000)*0.18)); return(0); }

 printf("R$ %.2f\n", 80+270+((A-4500)*0.28));

}
