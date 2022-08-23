/*
	LCM : if number are 12 and 18 then 36 become LCM  because it is the lowest number that divisibal by 18 &12.
*/
#include <stdio.h>

int main()
{
	int n1,n2,max;
	printf("Enter the n1 & n2: ");
	scanf("%d%d",&n1,&n2);
	max=n1>n2?n1:n2;
	while(1)
	{
		if(max%n1==0&&max%n2==0)
		{
			printf("LCM :%d ",max);
			break;
		}
		else
			max++;
	}
	return 0;
}
