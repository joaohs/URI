#include <stdio.h>

main()
{
 int H1, M1;	//inicio do alarme
 int H2, M2;	//fim do alarme
 int H, M;	//duracao do alarme
 
 while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2) != EOF) {
	if(H1==0 && M1==0 && H2==0 && M2==0)	return(0);
	H=H2-H1;	if(M2<M1) H--;		if(H<0) H=H+24;
	M=M2-M1;	if(M<0) M=M+60;

 	printf("%d\n", M+H*60);
 }
}
