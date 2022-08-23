/*
	find the Addition of even number and odd number in betn 1 to 100
*/

#include <stdio.h>

int main()
{
	int even=0;
	int odd=0; 
	int i=1;
	
	while(i<=100)
	{
		if(i%2==0)
			even=even+i;
		else
			odd=odd+i;
			
		i++;
	}
	
	printf("\nSum of Even Number= %d",even);
	printf("\nSum of Odd number= %d",odd);
	
	return 0;
}
