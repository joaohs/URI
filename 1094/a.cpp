#include <stdio.h>

main()
{
 double N, C=0.0, R=0.0, S=0.0;
 char T;

 scanf("%lf", &N);

 while(scanf("%lf %c", &N, &T) != EOF) {
	if(T=='C') { C=C+N; }
	if(T=='R') { R=R+N; }
	if(T=='S') { S=S+N; }
   }
 printf("Total: %.lf cobaias\n", C+R+S);
 printf("Total de coelhos: %.lf\n", C);
 printf("Total de ratos: %.lf\n", R);
 printf("Total de sapos: %.lf\n", S);
 printf("Percentual de coelhos: %.2lf %%\n", C*100/(C+R+S));
 printf("Percentual de ratos: %.2lf %%\n", R*100/(C+R+S));
 printf("Percentual de sapos: %.2lf %%\n", S*100/(C+R+S));
}
