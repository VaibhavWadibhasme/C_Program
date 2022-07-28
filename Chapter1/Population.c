#include <stdio.h>
#include <conio.h>

int main()
{
	float TP,PM,PW,TLM,TLW,TIM,TIW;
	TP=80000;
	PM=0.52*TP;
	PW=0.48*TP;
	TLM=0.35*TP;
	TLW=0.13*TP;
	TIM=PM-TLM;
	TIW=PW-TLW;
	printf("\nTotal Illitarate Men: %f\nTotal Illitarate Women: %f",TIM,TIW);
	return 0;
}
