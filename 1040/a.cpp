#include <stdio.h>

main()
{
 float A, B, C, D, Media, Exame;
 
 scanf("%f %f %f %f", &A, &B, &C, &D);

 Media=(A*2+B*3+C*4+D)/10;
 printf("Media: %.1f\n", Media);

 if(Media>=7) printf("Aluno aprovado.\n");
 if(Media<5) printf("Aluno reprovado.\n");
 if(Media>=5 && Media<7) {
		printf("Aluno em exame.\n");
		scanf("%f", &Exame);
		printf("Nota do exame: %.1f\n", Exame);
		Media=(Media+Exame)/2;
 		if(Media>=5) printf("Aluno aprovado.\n");
		printf("Media final: %.1f\n", Media);
	}
}
