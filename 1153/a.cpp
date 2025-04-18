#include <stdio.h>

int main(void)
{
 int n, fat;
 scanf("%d", &n);

 if(n==0) {printf("1\n"); return(0);}

 fat=n;
 for(int i=2;i<n;i++){
   fat=fat*i;
 }

 printf("%d\n", fat);
}
