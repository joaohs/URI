#include <stdio.h>
#include <string.h>

main(){
 int N, i, j, A, B;
 char S1[110], S2[110], S[110];

 scanf("%d", &N);
 while(scanf("%s %s", &S1, &S2) != EOF){
	A=strlen(S1);	B=strlen(S2);
	if(A<=B){
		for(i=0; i<A; i++) { S[i*2]=S1[i]; S[i*2+1]=S2[i]; }
		j=i*2;
		for(   ; i<B; i++) { S[j]=S2[i]; j++; }
		printf("%s\n", S);
		for(i=0; i<110; i++) { S1[i]=0; S2[i]=0; S[i]=0; }
	   }
	else{
		for(i=0; i<B; i++) { S[i*2]=S1[i]; S[i*2+1]=S2[i]; }
		j=i*2;
		for(   ; i<A; i++) { S[j]=S1[i]; j++; }
		printf("%s\n", S);
		for(i=0; i<110; i++) { S1[i]=0; S2[i]=0; S[i]=0; }
	}
 }
}

