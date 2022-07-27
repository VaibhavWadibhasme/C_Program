/*-----Program to Swap two Number-----*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,temp;
	printf("\nEnter value of a & b : ");
	scanf("%d%d",&a,&b);
	printf("Value of a is %d and b is %d before Swap.",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nValue of a is %d and b is %d After Swap.",a,b);
	return 0;
}
