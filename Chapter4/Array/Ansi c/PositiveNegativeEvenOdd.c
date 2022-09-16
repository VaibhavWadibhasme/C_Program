/*
	Twenty-five numbers are entered from the keyboard into an
	array. Write a program to find out how many of them are
	positive, how many are negative, how many are even and how
	many odd.
*/
#include <stdio.h>

int main()
{
	int i,pos=0,neg=0,even=0,odd=0,a[25];
	printf("Enter 25 number: ");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<25;i++)
	{
		a[i]>=0?pos++:neg++;
		a[i]%2==0?even++:odd++;
	}
	printf("\nNo of positive number:%d\nNo of negative number:%d\nNo of Even Number:%d\nNo of Odd number:%d\n",pos,neg,even,odd);
	return 0;
}
