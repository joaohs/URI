#include <stdio.h>

double fib(int n)
{
  double i, fib1 = 1, fib2 = 1, soma;
  for (i = 3; i <= n; i = i + 1)
  {
    soma = fib1 + fib2;
    fib1 = fib2;
    fib2 = soma;
  }
  return fib2;
}

double chamada(int n)
{
  double i, fib1 = 0, fib2 = 2, soma;
  for (i = 3; i <= n; i++)
  {
    soma = fib1 + fib2 + 2;
    fib1 = fib2;
    fib2 = soma;
  }
  return fib2;
}
 
int main(void)
{
 int n;
 scanf("%d", &n);
 while(scanf("%d", &n)!=EOF){
	if(n==1) printf("fib(1) = 0 calls = 1\n");
		else
		    printf("fib(%d) = %.lf calls = %.lf\n", n, chamada(n), fib(n));
 }
 return 0;
}
