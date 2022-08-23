/*
	Print table of integer provided by user.
	
	output:
	Enter Integer to get table: 5
	
	5*1=5
	5*2=10
	5*3=15
	5*4=20
	5*5=25
	5*6=30
	5*7=35
	5*8=40
	5*9=45
	5*10=50
*/
#include <stdio.h>

int main()
{
	int n,i=1;
	printf("Enter Integer to get table: ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("\n%d*%d=%d",n,i,(n*i));
		i++;
	}
	
	return 0;
}
