/*
	febonaccii series 0 1 1 2 3 5 8 13 21......
*/
#include <stdio.h>

int main()
{
	int f1=0,f2=1,f,i=1,j=1,num,f3=0,f4=1;
	printf("Enter no of terms: ");
	scanf("%d",&num);
	printf("Febonacci even number: \n");
	while(i<=num-2)
	{
		f=f1+f2;
		if(f%2==0)
			printf("%4d",f);
		f1=f2;
		f2=f;
		i++;
	}
	printf("\nFebonacci Odd number: \n");
	while(j<=num-2)
	{
		f=f3+f4;
		if(f%2!=0)
			printf("%4d",f);
		f3=f4;
		f4=f;
		j++;
	}
	return 0;
}
