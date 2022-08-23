/*
	Write a program to Display the cube of the numbers upto given input by user.
	
	output:
	Input number of Terms : 5
	
	Number is 1 and cube of the 1 is :1
	Number is 2 and cube of the 2 is :8
	Number is 3 and cube of the 3 is :27
	Number is 4 and cube of the 4 is :64
	Number is 5 and cube of the 5 is :125
*/

#include <stdio.h>

int main()
{
	int n,i=1;
	printf("Input number of Terms : ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\nNumber is %d and cube of the %d is :%d",i,i,(i*i*i));
		i++;
	}
	return 0;
}
