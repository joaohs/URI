#include <stdio.h>

main()
{
 int n;

 scanf("%d", &n);

 printf("%d:%d:%d\n", n/3600, n%3600/60, n%3600%60);
}
