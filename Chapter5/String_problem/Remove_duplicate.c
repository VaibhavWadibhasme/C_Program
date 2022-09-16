/*
	remove duplicate chatecter
*/

#include <stdio.h>

int main()
{
	char a[50];
	int count=0,i,j;
	printf("Enter the sentance: ");
	gets(a);
	while(a[i]!='\0')
	{
		
		count++;
		i++;
	}
	for(i=0;i<=count;i++)
	{
		for(j=i+1;j<=count;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=a[j+1];
			}
		}
	}
	puts(a);
	return 0;
}
