#include<stdio.h>

int valor(char A){

 if(A=='1') return 2;
 if(A=='2') return 5;
 if(A=='3') return 5;
 if(A=='4') return 4;
 if(A=='5') return 5;
 if(A=='6') return 6;
 if(A=='7') return 3;
 if(A=='8') return 7;
 if(A=='9') return 6;
 if(A=='0') return 6;

}

main()
{
 int N, Soma=0;
 char V;
 
 scanf("%d", &N);
 scanf("%c", &V);
 while(scanf("%c", &V) != EOF ) {
	if(V!='\n') Soma=Soma+valor(V);
		else {
			printf("%d leds\n", Soma);
			Soma=0;
		 }
 }
}
