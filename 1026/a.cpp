#include <stdio.h>

main()
{
 unsigned int A, B;

 while(scanf("%u %u", &A, &B) != EOF)
	printf("%u\n", A^B);
}
