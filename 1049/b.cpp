#include <stdio.h>
#include <string.h>

main()
{
 char A[30], B[30], C[30];
 scanf("%s %s %s", A, B, C);

 if(!strcmp(A,"vertebrado") && !strcmp(B,"ave") && !strcmp(C,"carnivoro") )	{ printf("aguia\n"); }
 if(!strcmp(A,"vertebrado") && !strcmp(B,"ave") && !strcmp(C,"onivoro")   )	{ printf("pomba\n"); }

}
