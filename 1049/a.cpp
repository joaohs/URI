#include <stdio.h>
#include <string.h>

main()
{
 char A[30];
 scanf("%s", A);

 if(!strcmp(A,"vertebrado")){
	scanf("%s", A);
	if(!strcmp(A,"ave")){
		scanf("%s", A);
		if(!strcmp(A,"carnivoro"))	printf("aguia\n");
		if(!strcmp(A,"onivoro"))		printf("pomba\n");
	}
	if(!strcmp(A,"mamifero")){
		scanf("%s", A);
		if(!strcmp(A,"onivoro")) 	printf("homem\n");
		if(!strcmp(A,"herbivoro"))	printf("vaca\n");
	}
 }

 if(!strcmp(A,"invertebrado")){
	scanf("%s", A);
	if(!strcmp(A,"inseto")){
		scanf("%s", A);
		if(!strcmp(A,"hematofago"))	printf("pulga\n");
		if(!strcmp(A,"herbivoro"))	printf("lagarta\n");
	}
	if(!strcmp(A,"anelideo")){
		scanf("%s", A);
		if(!strcmp(A,"hematofago"))	printf("sanguessuga\n");
		if(!strcmp(A,"onivoro")) 	printf("minhoca\n");
	}
 }
}
