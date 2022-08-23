/*
	hcf the hightest number that can divide both 
	example if number is 6 and 12 the HCF is 12.
*/
#include <stdio.h>

int main()
{
	int n1,n2,min,i=2,hcf;
	printf("Enter n1 & n2: ");
	scanf("%d%d",&n1,&n2);
	min=n1<n2?n1:n2;
	while(min>=2) //chack at home
	{
		if(n1%min==0&&n2%min==0)
		{
			printf("HCF: %d",min);
			break;
		}
		else
			min--;
	}
	
/*	while(i<=min)
	{
		if(n1%i==0&&n2%i==0)
		{
			hcf=i;
			i++;
		}
		else
			i++;
	}
	printf("HCF: %d",hcf);*/
	return 0;
}
