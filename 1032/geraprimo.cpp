#include <stdio.h>
#include <stdlib.h>
 
main() {
    int n, nMax, i, j, totalDivisores;
 
    scanf("%d", &nMax);
 
    for(i = 0; i <= nMax; i++) {
        totalDivisores = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                totalDivisores++;
            }
        }
        if(totalDivisores == 2) {
            printf("%4d ", i);
        }
    }
}

