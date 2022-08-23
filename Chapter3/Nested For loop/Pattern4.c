/*
	*
	* *
	* * *
	* * * * 
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * *
	* * * 
	* * 
	* 
*/
#include <stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=13;i++)
	{
		if(i<=4)
		{
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
		}
		else if(i<=9)
		{
			for(j=1;j<=5;j++)
			{
				printf("* ");
			}
		}
		else if(i<=13)
		{
			for(j=1;j<=14-i;j++)		
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
