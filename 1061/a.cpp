#include <stdio.h>

main()
{
 char Dia[5];
 int Di, Hi, Mi, Si;	//inicio do evento
 int Df, Hf, Mf, Sf;	//fim do evento
 int D, H, M, S;	//duracao do evento
 
 scanf("%s %d %d : %d : %d", Dia, &Di, &Hi, &Mi, &Si);
 scanf("%s %d %d : %d : %d", Dia, &Df, &Hf, &Mf, &Sf);

 D=Df-Di;	if(Hf<Hi) D--;
 //H=Hf-Hi;	if(H<0) H=H+24;		if(Mf<Mi) H--;	//submissao passou assim no URI
 //M=Mf-Mi;	if(M<0) M=M+60;		if(Sf<Si) M--;  //submissao passou assim no URI
 H=Hf-Hi;	if(Mf<Mi) H--;		if(H<0) H=H+24; //provavelmente assim eh o correto
 M=Mf-Mi;	if(Sf<Si) M--;		if(M<0) M=M+60; //provavelmente assim eh o correto
 S=Sf-Si;	if(S<0) S=S+60;

 printf("%d dia(s)\n", D);
 printf("%d hora(s)\n", H);
 printf("%d minuto(s)\n", M);
 printf("%d segundo(s)\n", S);

}
