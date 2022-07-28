/*----Cost of Each iteam----*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float selling_price, profit, cost;
	printf("\n Enter Selling Price & profit earn : ");
	scanf("%f%f",&selling_price,&profit);
	cost=(selling_price-profit)/15;
	printf("\n Cost of each Iteam=%f",cost);
	return 0;
}
