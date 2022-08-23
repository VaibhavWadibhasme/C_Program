/*
	febonaccii series 0 1 1 2 3 5 8 13 21......
*/
#include <stdio.h>

int main()
{
	int f1=0,f2=1,f,i=1,num;
	printf("Enter no of terms: ");
	scanf("%d",&num);
	printf("%4d%4d",f1,f2);
	while(i<=num-2)
	{
		f=f1+f2;
		printf("%4d",f);
		f1=f2;
		f2=f;
		i++;
	}
	return 0;
}
