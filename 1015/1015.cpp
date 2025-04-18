#include <stdio.h>
#include <math.h>

main()
{
 int x1, y1, x2, y2;
 long double Dist;
 scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
 Dist = sqrt( ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2-y1)) );
 printf("%.4Lf\n", Dist);
}
