/*
	factor of any number: 24=2*2*2*3
*/
#include <stdio.h>

int main()
{
	int i=2,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Factor of Number:");
	while(num>1)
	{
		if(num%i==0)
		{
			printf("%d ",i);
			num=num/i;
		}
		else
			i++;
		
	}
	
	
	return 0;
}
