#include <stdio.h>

main()
{
 float A, B, C;
 while(scanf("%f %f %f", &A, &B, &C) != EOF){
    printf("MEDIA = %.1f\n", (A*2+B*3+C*5)/10);
 }
}
