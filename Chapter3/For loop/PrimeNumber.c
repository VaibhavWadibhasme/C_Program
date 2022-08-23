/*
	Check prime number.
*/
#include <stdio.h>

int main()
{
	int i,num,flag=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			printf("\nThe Number %d is not Prime Number.",num);
			break;
		}
	}
	if(flag==1)
		printf("\nThe %d is Prime Number.",num);
	return 0;
}
