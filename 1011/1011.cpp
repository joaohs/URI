#include <stdio.h>

main()
{
 int R;
 while(scanf("%d", &R) != EOF){
    printf("VOLUME = %.3f\n", (4*3.14159*(R*R*R))/3);
 }
}
