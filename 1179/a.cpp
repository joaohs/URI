#include <stdio.h>

main()
{
 int j, n, par[5], impar[5], p=0, i=0;

 while(scanf("%d", &n) != EOF){
	if(n%2==0){
		par[p]=n;
		p++;
		if(p==5){
			for(j=0;j<p;j++) printf("par[%d] = %d\n", j, par[j]);
			p=0;
		}
	  }
	  else{
		impar[i]=n;
		i++;
		if(i==5){
			for(j=0;j<i;j++) printf("impar[%d] = %d\n", j, impar[j]);
			i=0;
		}
	  }
 }

 for(j=0;j<i;j++) printf("impar[%d] = %d\n", j, impar[j]);
 for(j=0;j<p;j++) printf("par[%d] = %d\n", j, par[j]);

}
