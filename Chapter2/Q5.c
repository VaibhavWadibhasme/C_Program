/*	An electric power distribution company charges its domestic consumers as
	follows:
	Consumption Units Rate of Charge
	0 – 200 Rs. 0.50 per unit
	201 – 400 Rs. 100 plus Rs. 0.65 per unit excess of 200
	401 – 600 Rs. 230 plus Rs. 0.80 per unit excess of 400
	601 and above Rs. 390 plus Rs. 1.00 per unit excess of 600
	reads the customer number and power consumed and prints the amount
	to be paid by the customer.*/

#include <stdio.h>	
int main()
{
	int units,custnum;
	float charges;
	printf("Enter CUSTOMER NO. and UNITS consumed\n");
	scanf("%d %d",&custnum,&units);
	if(units<=200)
		charges=0.5*units;
	else if(units<=400)
		charges=100+0.65*(units-200);
	else if(units<=600)
		charges=230+0.8*(units-400);
	else
		charges=390+(units-600);
	printf("\n\nCustomer No: %d charges: %.2f\n",custnum,charges);
	return 0;
}
