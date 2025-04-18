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
 
int main(void)
{
 int n;
 scanf("%d", &n);
 while(scanf("%d", &n)!=EOF){
	if(n==0) printf("Fib(0) = 0\n");
		else
		    printf("Fib(%d) = %.lf\n", n, fib(n));
 }
 return 0;
}
