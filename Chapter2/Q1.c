/*	Reads four values a, b, c, and d from the terminal and
	evaluates the ratio of (a+b) to (c–d) and prints the result, if c–d is not equal
	to zero.*/
	
#include <stdio.h>
int main()
{
	int a,b,c,d;
	float ratio;
	printf("Enter Four integer value\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c-d!=0)		//Execute statement block
	{
		ratio=(float)(a+b)/(float)(c-d); //Explicit type conversion
		printf("Ratio=%f\n",ratio);
	}
}
