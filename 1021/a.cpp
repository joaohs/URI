#include <stdio.h>

main()
{
 long double aux;
 long int n;

 scanf("%Lf", &aux);
 n=aux*100;

 printf("NOTAS:\n");
 printf("%ld nota(s) de R$ 100.00\n", n/10000);
 printf("%ld nota(s) de R$ 50.00\n", n%10000/5000);
 printf("%ld nota(s) de R$ 20.00\n", n%10000%5000/2000);
 printf("%ld nota(s) de R$ 10.00\n", n%10000%5000%2000/1000);
 printf("%ld nota(s) de R$ 5.00\n",  n%10000%5000%2000%1000/500);
 printf("%ld nota(s) de R$ 2.00\n",  n%10000%5000%2000%1000%500/200);

 printf("MOEDAS:\n", n);
 printf("%ld moeda(s) de R$ 1.00\n",  n%10000%5000%2000%1000%500%200/100);
 printf("%ld moeda(s) de R$ 0.50\n",  n%10000%5000%2000%1000%500%200%100/50);
 printf("%ld moeda(s) de R$ 0.25\n",  n%10000%5000%2000%1000%500%200%100%50/25);
 printf("%ld moeda(s) de R$ 0.10\n",  n%10000%5000%2000%1000%500%200%100%50%25/10);
 printf("%ld moeda(s) de R$ 0.05\n",  n%10000%5000%2000%1000%500%200%100%50%25%10/5);
 printf("%ld moeda(s) de R$ 0.01\n",  n%10000%5000%2000%1000%500%200%100%50%25%10%5);
}
