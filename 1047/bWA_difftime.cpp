#include <time.h>
#include <stdio.h>

int main (void)
{
 struct tm t1;
 time_t inicio, fim;
 int A, B, C, D, hora, min;

 scanf("%d %d %d %d", &A, &B, &C, &D);

if((A==C) && (B>=D)) C=C+24;

 t1.tm_hour = A;
 t1.tm_min = B;
 inicio = mktime (& t1);

 t1.tm_hour = C;
 t1.tm_min = D;
 fim = mktime (& t1);

 hora=difftime(fim, inicio)/3600;
 min=difftime(fim, inicio)/60;

 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min%60);

}

