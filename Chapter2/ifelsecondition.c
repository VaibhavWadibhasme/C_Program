#include <stdio.h>

int main()
{
	int qyt;
	float rate,totalexp,dis;
	printf("Please Enter the Quantity: ");
	scanf("%d",&qyt);
	printf("Please Enter the Rate per item: ");
	scanf("%f",&rate);
	if(qyt>1000)
		dis=0.10;
	else
		dis=0;
	totalexp=qyt*rate-qyt*rate*dis;
	printf("Total Expance:%f",totalexp);
	return 0;
	
}
