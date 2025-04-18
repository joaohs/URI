#include <stdio.h>

int main(void)
{
 long double M, N, fatm, fatn;

 while(scanf("%Lf %Lf", &M, &N) != EOF){
	if(M==0) fatm=1;
		else{
			fatm=M;
			for(int i=2;i<M;i++){
			   fatm=fatm*i;
			}
		}
	if(N==0) fatn=1;
		else{
			fatn=N;
			for(int i=2;i<N;i++){
			   fatn=fatn*i;
			}
		}
 printf("%.Lf\n", fatm+fatn);
 }
}
