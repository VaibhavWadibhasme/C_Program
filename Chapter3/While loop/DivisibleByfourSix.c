/*
	Write a program to print all numbers which is divisble by 4 & 6 betn 1 to 100.
*/
#include <stdio.h>

int main()
{
	int i=1;
	
	while(i<=100)
	{
		if(i%4==0&&i%6==0)
			printf("%d\n",i);
		i++;
	}
	return 0;
}
