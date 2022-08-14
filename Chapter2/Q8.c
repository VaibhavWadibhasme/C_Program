/*	Write a program to determine the Greatest Common Divisor (GCD) of two
	numbers.
	
	Algorithm
	Step 1 – Start
	Step 2 – Accept the two numbers whose GCD is to be found (num1, num2)
	Step 3 – Call function GCD(num1,num2)
	Step 4 – Display the value returned by the function call GCD(num1, num2)
	Step 5 – Stop
	GCD(a,b)
	Step 1 – Start
	Step 2 – If b > a goto Step 3 else goto Step 4
	Step 3 – Return the result of the function call GCD(b,a) to the calling function
	Step 4 – If b = 0 goto Step 5 else goto Step 6
	Step 5 – Return the value a to the calling function
	Step 6 – Return the result of the function call GCD(b,a mod b) to the calling function*/
	
	
#include<stdio.h>

#include<math.h>

int GCD(int m,int n);
int main()
{
	int num1,num2,x;
	
	printf("Enter the two number whose GCD is to be found: ");
	scanf("%d %d",&num1,&num2);
	x=GCD(num1,num2);
	printf("\nGCD of %d and %d is %d\n",num1,num2,x);
	return 0;
}

int GCD(int a, int b)
{
	if(b>a)
		return GCD(b,a);
	if(b==0)
		return a;
	else
		return GCD(b,a%b);
}
