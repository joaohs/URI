#include <stdio.h>

int fib(int n)                             
{                                          
  int i, fib1 = 1, fib2 = 1, soma;         
  for (i = 3; i <= n; i = i + 1)           
  {                                        
    soma = fib1 + fib2;                    
    fib1 = fib2;                           
    fib2 = soma;                           
    printf(" %d", fib2);
  }                                        
//  return fib2;                             
}                                          
 
int main(void)
{
 int n;
 scanf("%d", &n);
 if(n==1) printf("0");
 if(n==2) printf("0 1");
 if(n>=3) printf("0 1 1");
 fib(n-1);
 //printf("%d\n", fib(n));
 printf("\n");
 return 0;
}
