#include <stdio.h>

main()
{
 int X, i=1;

 scanf("%d", &X);

 if(X%2!=0) { printf("%d\n%d\n%d\n%d\n%d\n%d\n", X, X+2, X+4, X+6, X+8, X+10); }
 if(X%2==0) { printf("%d\n%d\n%d\n%d\n%d\n%d\n", X+1, X+3, X+5, X+7, X+9, X+11); }

}
