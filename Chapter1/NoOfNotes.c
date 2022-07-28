#include <stdio.h>
#include <conio.h>

int main()
{
	int amount,a,b,c;
	printf("\nEnter the amount: ");
	scanf("%d",&amount);
	a=amount/100;
	b=(amount%100)/50;
	c=((amount%100)%50)/10;
	printf("\nYou will get %d Notes of 100.\n%d Notes of 50.\n%d Notes of 10.",a,b,c);
	return 0;
}
