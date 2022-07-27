/*-----Program to Convert celcious to feranite-----*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float ctemp,ftemp;
	printf("\nEnter temperature in celcious: ");
	scanf("%f",&ctemp);
	ftemp=(((9.0/5.0)*ctemp)+32);
	printf("\nTemperature in faranite is :%f",ftemp);
	return 0;
}
