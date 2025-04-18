#include <stdio.h>

main()
{
 long double Distancia, Soma=0, Cont=0;
 char nome[100];

 fflush(stdin);
 gets(nome);
 while(scanf("%Lf", &Distancia) != EOF) {
	Soma=Soma+Distancia;
	Cont++;
	fflush(stdin);
	gets(nome);
	gets(nome);
 }
 printf("%.1Lf\n", Soma/Cont);
}
